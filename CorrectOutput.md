## Correct Output for Project 2

Considering the following input:

    T0, 9, 35
    T1, 10, 25
    T2, 7, 40
    T3, 6, 20
    T4, 10, 40
    T5, 4, 35
    T6, 10, 20
    T7, 3, 35
    T8, 3, 30
    T9, 4, 30
    T10, 4, 35
    T11, 8, 20
    T12, 4, 20
    T13, 5, 15
    T14, 7, 10
    T15, 1, 25
    T16, 8, 25
    T17, 6, 30
    T18, 2, 40
    T19, 3, 20
    T20, 9, 10
    T21, 7, 5
    T22, 6, 35
    T23, 3, 40
    T24, 9, 30

Here are the correct outputs for the 5 scheduling algorithms:

## FCFS

    Running task = [T0] [9] [35] for 35 units.
    Running task = [T1] [10] [25] for 25 units.
    Running task = [T2] [7] [40] for 40 units.
    Running task = [T3] [6] [20] for 20 units.
    Running task = [T4] [10] [40] for 40 units.
    Running task = [T5] [4] [35] for 35 units.
    Running task = [T6] [10] [20] for 20 units.
    Running task = [T7] [3] [35] for 35 units.
    Running task = [T8] [3] [30] for 30 units.
    Running task = [T9] [4] [30] for 30 units.
    Running task = [T10] [4] [35] for 35 units.
    Running task = [T11] [8] [20] for 20 units.
    Running task = [T12] [4] [20] for 20 units.
    Running task = [T13] [5] [15] for 15 units.
    Running task = [T14] [7] [10] for 10 units.
    Running task = [T15] [1] [25] for 25 units.
    Running task = [T16] [8] [25] for 25 units.
    Running task = [T17] [6] [30] for 30 units.
    Running task = [T18] [2] [40] for 40 units.
    Running task = [T19] [3] [20] for 20 units.
    Running task = [T20] [9] [10] for 10 units.
    Running task = [T21] [7] [5] for 5 units.
    Running task = [T22] [6] [35] for 35 units.
    Running task = [T23] [3] [40] for 40 units.
    Running task = [T24] [9] [30] for 30 units.

    Average waiting time = 338.40
    Average turnaround time = 365.20
    Average response time = 338.40

## SJF
    Running task = [T21] [7] [5] for 5 units.
    Running task = [T14] [7] [10] for 10 units.
    Running task = [T20] [9] [10] for 10 units.
    Running task = [T13] [5] [15] for 15 units.
    Running task = [T3] [6] [20] for 20 units.
    Running task = [T6] [10] [20] for 20 units.
    Running task = [T11] [8] [20] for 20 units.
    Running task = [T12] [4] [20] for 20 units.
    Running task = [T19] [3] [20] for 20 units.
    Running task = [T1] [10] [25] for 25 units.
    Running task = [T15] [1] [25] for 25 units.
    Running task = [T16] [8] [25] for 25 units.
    Running task = [T8] [3] [30] for 30 units.
    Running task = [T9] [4] [30] for 30 units.
    Running task = [T17] [6] [30] for 30 units.
    Running task = [T24] [9] [30] for 30 units.
    Running task = [T0] [9] [35] for 35 units.
    Running task = [T5] [4] [35] for 35 units.
    Running task = [T7] [3] [35] for 35 units.
    Running task = [T10] [4] [35] for 35 units.
    Running task = [T22] [6] [35] for 35 units.
    Running task = [T2] [7] [40] for 40 units.
    Running task = [T4] [10] [40] for 40 units.
    Running task = [T18] [2] [40] for 40 units.
    Running task = [T23] [3] [40] for 40 units.

    Average waiting time = 251.40
    Average turnaround time = 278.20
    Average response time = 251.40
## Round Robin (RR)
    Running task = [T0] [9] [35] for 10 units.
    Running task = [T1] [10] [25] for 10 units.
    Running task = [T2] [7] [40] for 10 units.
    Running task = [T3] [6] [20] for 10 units.
    Running task = [T4] [10] [40] for 10 units.
    Running task = [T5] [4] [35] for 10 units.
    Running task = [T6] [10] [20] for 10 units.
    Running task = [T7] [3] [35] for 10 units.
    Running task = [T8] [3] [30] for 10 units.
    Running task = [T9] [4] [30] for 10 units.
    Running task = [T10] [4] [35] for 10 units.
    Running task = [T11] [8] [20] for 10 units.
    Running task = [T12] [4] [20] for 10 units.
    Running task = [T13] [5] [15] for 10 units.
    Running task = [T14] [7] [10] for 10 units.
    Running task = [T15] [1] [25] for 10 units.
    Running task = [T16] [8] [25] for 10 units.
    Running task = [T17] [6] [30] for 10 units.
    Running task = [T18] [2] [40] for 10 units.
    Running task = [T19] [3] [20] for 10 units.
    Running task = [T20] [9] [10] for 10 units.
    Running task = [T21] [7] [5] for 5 units.
    Running task = [T22] [6] [35] for 10 units.
    Running task = [T23] [3] [40] for 10 units.
    Running task = [T24] [9] [30] for 10 units.
    Running task = [T0] [9] [25] for 10 units.
    Running task = [T1] [10] [15] for 10 units.
    Running task = [T2] [7] [30] for 10 units.
    Running task = [T3] [6] [10] for 10 units.
    Running task = [T4] [10] [30] for 10 units.
    Running task = [T5] [4] [25] for 10 units.
    Running task = [T6] [10] [10] for 10 units.
    Running task = [T7] [3] [25] for 10 units.
    Running task = [T8] [3] [20] for 10 units.
    Running task = [T9] [4] [20] for 10 units.
    Running task = [T10] [4] [25] for 10 units.
    Running task = [T11] [8] [10] for 10 units.
    Running task = [T12] [4] [10] for 10 units.
    Running task = [T13] [5] [5] for 5 units.
    Running task = [T15] [1] [15] for 10 units.
    Running task = [T16] [8] [15] for 10 units.
    Running task = [T17] [6] [20] for 10 units.
    Running task = [T18] [2] [30] for 10 units.
    Running task = [T19] [3] [10] for 10 units.
    Running task = [T22] [6] [25] for 10 units.
    Running task = [T23] [3] [30] for 10 units.
    Running task = [T24] [9] [20] for 10 units.
    Running task = [T0] [9] [15] for 10 units.
    Running task = [T1] [10] [5] for 5 units.
    Running task = [T2] [7] [20] for 10 units.
    Running task = [T4] [10] [20] for 10 units.
    Running task = [T5] [4] [15] for 10 units.
    Running task = [T7] [3] [15] for 10 units.
    Running task = [T8] [3] [10] for 10 units.
    Running task = [T9] [4] [10] for 10 units.
    Running task = [T10] [4] [15] for 10 units.
    Running task = [T15] [1] [5] for 5 units.
    Running task = [T16] [8] [5] for 5 units.
    Running task = [T17] [6] [10] for 10 units.
    Running task = [T18] [2] [20] for 10 units.
    Running task = [T22] [6] [15] for 10 units.
    Running task = [T23] [3] [20] for 10 units.
    Running task = [T24] [9] [10] for 10 units.
    Running task = [T0] [9] [5] for 5 units.
    Running task = [T2] [7] [10] for 10 units.
    Running task = [T4] [10] [10] for 10 units.
    Running task = [T5] [4] [5] for 5 units.
    Running task = [T7] [3] [5] for 5 units.
    Running task = [T10] [4] [5] for 5 units.
    Running task = [T18] [2] [10] for 10 units.
    Running task = [T22] [6] [5] for 5 units.
    Running task = [T23] [3] [10] for 10 units.

    Average waiting time = 465.20
    Average turnaround time = 492.00
    Average response time = 119.40

## Priority

    Running task = [T1] [10] [25] for 25 units.
    Running task = [T4] [10] [40] for 40 units.
    Running task = [T6] [10] [20] for 20 units.
    Running task = [T0] [9] [35] for 35 units.
    Running task = [T20] [9] [10] for 10 units.
    Running task = [T24] [9] [30] for 30 units.
    Running task = [T11] [8] [20] for 20 units.
    Running task = [T16] [8] [25] for 25 units.
    Running task = [T2] [7] [40] for 40 units.
    Running task = [T14] [7] [10] for 10 units.
    Running task = [T21] [7] [5] for 5 units.
    Running task = [T3] [6] [20] for 20 units.
    Running task = [T17] [6] [30] for 30 units.
    Running task = [T22] [6] [35] for 35 units.
    Running task = [T13] [5] [15] for 15 units.
    Running task = [T5] [4] [35] for 35 units.
    Running task = [T9] [4] [30] for 30 units.
    Running task = [T10] [4] [35] for 35 units.
    Running task = [T12] [4] [20] for 20 units.
    Running task = [T7] [3] [35] for 35 units.
    Running task = [T8] [3] [30] for 30 units.
    Running task = [T19] [3] [20] for 20 units.
    Running task = [T23] [3] [40] for 40 units.
    Running task = [T18] [2] [40] for 40 units.
    Running task = [T15] [1] [25] for 25 units.

    Average waiting time = 306.40
    Average turnaround time = 333.20
    Average response time = 306.40

## Priority_RR
    Running task = [T1] [10] [25] for 10 units.
    Running task = [T4] [10] [40] for 10 units.
    Running task = [T6] [10] [20] for 10 units.
    Running task = [T1] [10] [15] for 10 units.
    Running task = [T4] [10] [30] for 10 units.
    Running task = [T6] [10] [10] for 10 units.
    Running task = [T1] [10] [5] for 5 units.
    Running task = [T4] [10] [20] for 20 units.
    Running task = [T0] [9] [35] for 10 units.
    Running task = [T20] [9] [10] for 10 units.
    Running task = [T24] [9] [30] for 10 units.
    Running task = [T0] [9] [25] for 10 units.
    Running task = [T24] [9] [20] for 10 units.
    Running task = [T0] [9] [15] for 10 units.
    Running task = [T24] [9] [10] for 10 units.
    Running task = [T0] [9] [5] for 5 units.
    Running task = [T11] [8] [20] for 10 units.
    Running task = [T16] [8] [25] for 10 units.
    Running task = [T11] [8] [10] for 10 units.
    Running task = [T16] [8] [15] for 15 units.
    Running task = [T2] [7] [40] for 10 units.
    Running task = [T14] [7] [10] for 10 units.
    Running task = [T21] [7] [5] for 5 units.
    Running task = [T2] [7] [30] for 30 units.
    Running task = [T3] [6] [20] for 10 units.
    Running task = [T17] [6] [30] for 10 units.
    Running task = [T22] [6] [35] for 10 units.
    Running task = [T3] [6] [10] for 10 units.
    Running task = [T17] [6] [20] for 10 units.
    Running task = [T22] [6] [25] for 10 units.
    Running task = [T17] [6] [10] for 10 units.
    Running task = [T22] [6] [15] for 15 units.
    Running task = [T13] [5] [15] for 15 units.
    Running task = [T5] [4] [35] for 10 units.
    Running task = [T9] [4] [30] for 10 units.
    Running task = [T10] [4] [35] for 10 units.
    Running task = [T12] [4] [20] for 10 units.
    Running task = [T5] [4] [25] for 10 units.
    Running task = [T9] [4] [20] for 10 units.
    Running task = [T10] [4] [25] for 10 units.
    Running task = [T12] [4] [10] for 10 units.
    Running task = [T5] [4] [15] for 10 units.
    Running task = [T9] [4] [10] for 10 units.
    Running task = [T10] [4] [15] for 10 units.
    Running task = [T5] [4] [5] for 5 units.
    Running task = [T10] [4] [5] for 5 units.
    Running task = [T7] [3] [35] for 10 units.
    Running task = [T8] [3] [30] for 10 units.
    Running task = [T19] [3] [20] for 10 units.
    Running task = [T23] [3] [40] for 10 units.
    Running task = [T7] [3] [25] for 10 units.
    Running task = [T8] [3] [20] for 10 units.
    Running task = [T19] [3] [10] for 10 units.
    Running task = [T23] [3] [30] for 10 units.
    Running task = [T7] [3] [15] for 10 units.
    Running task = [T8] [3] [10] for 10 units.
    Running task = [T23] [3] [20] for 10 units.
    Running task = [T7] [3] [5] for 5 units.
    Running task = [T23] [3] [10] for 10 units.
    Running task = [T18] [2] [40] for 40 units.
    Running task = [T15] [1] [25] for 25 units.

    Average waiting time = 316.20
    Average turnaround time = 343.00
    Average response time = 287.00