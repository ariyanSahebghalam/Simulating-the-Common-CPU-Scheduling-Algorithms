// Round Robin scheduler
// From what I understand, we have to create a list of tasks, and schedule them
// We have to implement the add function first, each time decrease a time quantum from the task, insert it to least again, repeat until no more tasks left.

#include "schedulers.h"
#include "list.h"
#include "task.h"
#include "cpu.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Pointing to the first node in the list
struct node **list_head = NULL;
Task *pickNextTask();               // Prototype
double process_waiting_time = 0;
double sum = 0;
int count = 0;
const int TIME_QUANTUM = 10;

int totalTaskCount = 1;
double totalResponse = 0;
int passes = 0;

// Adding all the tasks to the list
void add(char *name, int priority, int burst) {
    if (list_head == NULL) {    // Creating the first node
        list_head = malloc(sizeof(struct node));
    }

    // Creating a new task
    Task *new_task = malloc(sizeof(Task));

    // Assigning the values given from the file
    new_task->name = name;
    new_task->priority = priority;
    new_task->burst = burst;

    // list.c, creates a new node and adds the node, with the newly created task at the start
    insert(list_head, new_task);
}


// After adding, we have to schedule
void schedule() {

    ///////////////////////////////
    struct node *temp = *list_head;

    // Used to count the number of unique tasks in the list originally
    while (temp->next != NULL) {
        temp = temp->next;
        totalTaskCount++;
    }
    // printf("%d", totalTaskCount);
    //////////////////////////////


    while (*list_head != NULL) {


        Task *executing_task = pickNextTask();          // pickNextTask() picks the task to be executed

        // For the total response time, only count the first originally unique tasks
        if (passes < totalTaskCount) {
            // printf("\n\n", process_waiting_time);
            totalResponse += process_waiting_time;
            // printf("%f", totalResponse);
            passes++;
        }

        // If conditon in case the CPU burst time was more than the time quantum
        if (executing_task->burst > TIME_QUANTUM) {
            insert(list_head, executing_task);
            run(executing_task, TIME_QUANTUM);
            executing_task->burst -= TIME_QUANTUM;
            process_waiting_time += TIME_QUANTUM;
            // printf("\n\nprocess_waiting_time = %f\n\n", process_waiting_time);

        }
        // In case the burst time was less than the time quantum
        else {
            run(executing_task, executing_task->burst);
            process_waiting_time += executing_task->burst;
            sum += process_waiting_time;
            count++;

            // printf("\n\nprocess_waiting_time = %f\n\n", process_waiting_time);
            // printf("\n\nsum = %f\n\n", sum);


        }

    }





    // printf("%.2lf\n", process_waiting_time);
    // printf("%d\n", count);
    // printf("%.2lf\n", sum);
    printf("\nAverage waiting time = %.2lf\n", ((sum - process_waiting_time) / count));
    printf("Average turnaround time = %.2lf\n", ((sum) / count));
    printf("Average response time = %.2lf\n", ((totalResponse) / count));
}


// Where the task to be executed must be returned
Task *pickNextTask() {

    // In case no task
    if (*list_head == NULL) {
        return NULL;
    }

    // Note list_head after all the insertions, points to the first task in the list, which is the last in
    struct node *pointer = *list_head;

    // All the way to the end
    while (pointer->next != NULL) {
        pointer = pointer->next;
    }

    Task *last_task = pointer->task;


    delete(list_head, last_task);
    return last_task;
}


// Possible edge case, when a task at the end has like 90 burst left, will it be finished in one swoop or not?
