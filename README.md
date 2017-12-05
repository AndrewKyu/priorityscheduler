# priorityscheduler
SJSU CmpE 130 Group Project

### Abstract
The objective of the project is to create a scheduling system that helps the user become more efficient and organized. The user can choose how they would like to prioritize their schedule based off of some of the given options. Based off of the chosen option, the system will automatically schedule the tasks that were input by the user. 

A few of the possible algorithms that will be implemented is: first come first serve, shortest job first, priority weight, round robin, or multilevel queue. First Come First Serve Scheduling ensures that jobs are executed on first come and first serve basis. The Shortest-Job-First Scheduling is the best way to shorten the waiting time. Priority Scheduling ensures that priority is assigned for each process. Round Robin makes sure that quantum is allocated for execution. Multilevel Queue Scheduling makes it possible for different queues to have different priorities. Some of the data structures that will be implemented are sort, queue, and stack.

### Running the Code
When the program is run, a menu will be generated which prompts the user to choose how they would like their tasks to be sorted: first come first serve, shortest job first, priority weight, round robin, or multilevel queue. Once the user selects a valid option, they will be asked to input the number of tasks they would like to be sorted. From there, it will ask them for a task name, duration and/or priority weight (ranging from 1 to 3), or time quantum (if needed). Once the user has input all of the information necessary, the console will output the ordered list of tasks that the user needs to complete. 

After, it will loop back into the menu where the user can either choose how they would like their tasks to be sorted, or exit the program.
