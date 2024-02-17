#include "schedulers.h"
#include "list.h"
#include "task.h"
#include "cpu.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

const int TIME_QUANTUM = 10;

Task *pickNextTask();

// Array of pointers to linked lists
struct node **list_head[MAX_PRIORITY + 1] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};   // Each index, representing the priority
                       
                       

double process_waiting_time = 0;
double sum = 0;
int count = 0;


double totalResponse = 0;


                  
                       
// stores the pointer to the list of tasks

// Adding all the tasks to the array
void add(char *name, int priority, int burst) {

    Task *new_task = malloc(sizeof(Task));

    new_task->name = name;
    new_task->priority = priority;
    new_task->burst = burst;

    if (list_head[priority] == NULL) {
        list_head[priority] = malloc(sizeof(struct node));
        *list_head[priority] = NULL;
    }
    
    // Better way to count the number of nodes
    count++;
    insert(list_head[priority], new_task);
}



void schedule() {
    // Going from priority 10 to 1
    for (int i = MAX_PRIORITY; i >= MIN_PRIORITY; i--) {
        if (list_head[i] != NULL) {
            while (*list_head[i] != NULL) {
                // Check if there's only one task left in this priority queue
                if ((*list_head[i])->next == NULL) {
                    Task *executing_task = pickNextTask(i);

                    // Condition in case the task has been met already, manipulated task.h to add a flag onto it
                    if (executing_task->flag == 0) {
                        totalResponse += process_waiting_time;
                        executing_task->flag = 1;
                        // printf("\n\ntotal response: %lf\n", totalResponse);
                    }

                    run(executing_task, executing_task->burst); // Execute the task in one go
                    process_waiting_time += executing_task->burst;
                    sum += process_waiting_time;
                    // printf("%lf\n\n", process_waiting_time);
                    // printf("\nsum = %lf\n", sum);
                }
                // In case more than one task is left in the priority queue
                else {
                    Task *executing_task = pickNextTask(i);

                    // Condition in case the task has been met already, manipulated task.h to add a flag onto it
                    if (executing_task->flag == 0) {
                        totalResponse += process_waiting_time;
                        executing_task->flag = 1;
                        // printf("\n\ntotal response: %lf\n", totalResponse);
                    }

                    // for round robin, in case the CPU burst time is more than 10 quantum
                    if (executing_task->burst > TIME_QUANTUM) {
                        insert(list_head[i], executing_task);           // for the specific priority, add to the queue list
                        run(executing_task, TIME_QUANTUM);
                        executing_task->burst -= TIME_QUANTUM;
                        process_waiting_time += TIME_QUANTUM;
                        
                        // printf("%lf\n\n", process_waiting_time);
                    }
                    // In case the CPU burst time is less than 10 quantum
                    else {    // do the rest for the list
                        run(executing_task, executing_task->burst);
                        process_waiting_time += executing_task->burst;
                        sum += process_waiting_time;
                        // printf("%lf\n\n", process_waiting_time);
                        // printf("\nsum = %lf\n", sum);
                    }
                }
            }
        }
    }

    // printf("%.2f \n", totalResponse);
    printf("\nAverage waiting time = %.2lf\n", (sum - process_waiting_time) / count);
    printf("Average turnaround time = %.2lf\n", ((sum) / count));
    printf("Average response time = %.2lf\n", ((totalResponse) / count));

}



// Where the task to be executed must be returned
Task *pickNextTask(int priority) {
    struct node *pointer = NULL;

    pointer = *list_head[priority];

    while (pointer->next != NULL) {
        pointer = pointer->next;
    }

    delete(list_head[priority], pointer->task);
    return pointer->task;
}