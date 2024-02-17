// Shortest Job First Scheduler
// From what I understand, we have to create a list of tasks, schedule them,
// but according to the shortest job first. For me to do that, I have to make the scheduler
// pick the smallest task, delete, then the next smallest task, repeat.

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
    while (*list_head != NULL) {
        Task *executing_task = pickNextTask();          // pickNextTask() picks the task to be executed
        process_waiting_time += executing_task->burst;
        // printf("waiting time for the process: %.2lf\n", process_waiting_time);
        sum += process_waiting_time;
        count++;
        run(executing_task, executing_task->burst);     // The executing done in CPU.C, you give the memory location of the task, and its associated burst time
    }

    // printf("%.2lf\n", process_waiting_time);
    // printf("%d\n", count);
    // printf("%.2lf\n", sum);
    printf("\nAverage waiting time = %.2lf\n", ((sum - process_waiting_time) / count));
    printf("Average turnaround time = %.2lf\n", ((sum) / count));
    printf("Average response time = %.2lf\n", ((sum - process_waiting_time) / count));
}


// Where the task to be executed must be returned
Task *pickNextTask() {

    // In case no task
    if (*list_head == NULL) {
        return NULL;
    }



    // Note list_head after all the insertions, points to the first task in the list, which is the last in
    struct node *pointer = *list_head;
    Task *shortest_task = (*list_head)->task;



    while (pointer->next != NULL) {
        pointer = pointer->next;

        if (pointer->task->burst <= shortest_task->burst) {
            shortest_task = pointer->task;
        }
    }


    // Must constantly remove the last task, till no task remains, which ends in scheduler
    delete(list_head, shortest_task);
    return shortest_task;
}