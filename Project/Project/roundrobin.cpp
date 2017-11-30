//
//  roundrobin.cpp
//  Project
//
//  Created by Andrew Kyu on 11/29/17.
//  Copyright © 2017 Cindy Wang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "roundrobin.hpp"
#define MAX_TASK 10
using namespace std;

void roundRobin::roundrobinScheduler(){
    int n, count, quantum;
    roundRobin taskList[MAX_TASK];
    bool allDone = false;
    
    cout << "Enter the number of tasks: " << endl;
    cin >> n;
    
    if (n > MAX_TASK)
    {
        cout << "Maximum task value is 10" << endl;
       // return -1;
    }
    
    for (count = 0; count < n; count++)
    {
        cout << "Enter the name of Task #" << count+1 << ": " << endl;
        cin >> taskList[count].taskName;
        
        cout << "Enter the duration of Task #" << count+1 << " (in minutes): " << endl;
        cin >> taskList[count].duration;
    }
    
    cout << "Enter the time quantum: " << endl;
    cin >> quantum;
    
    cout << endl;
    while (!allDone)
    {
        allDone = true;
        for (count = 0; count < n; count++)
        {
            if (taskList[count].duration > 0)
            {
                cout << "Task: " << taskList[count].taskName << endl;
                taskList[count].duration = taskList[count].duration - quantum;
                allDone = false;
            }
        }
    }
    
}
