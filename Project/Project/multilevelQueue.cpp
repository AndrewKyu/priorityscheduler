//
//  multilevelQueue.cpp
//  Project
//
//  Created by Cindy Wang on 11/28/17.
//  Copyright © 2017 Cindy Wang. All rights reserved.
//

#include "multilevelQueue.hpp"
#include <iostream>
using namespace std;
#define MAX_TASK 10

void doMultilevelQueue()
{
    
    int task[MAX_TASK], duration[MAX_TASK], priority[MAX_TASK];
    string taskName[MAX_TASK];
    int n, i, j, temp;
    string tempName;
    
    cout << "Enter the number of tasks: " << endl;
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        task[i] = i;
        cout << "Enter the name of Task #" << i + 1 << endl;
        cin >> taskName[i];
        cout << "Enter the duration of Task #" << i + 1 << " (in minutes)" << endl;
        cin >> duration[i];
        cout << "Enter the priority of Task #" << i + 1 << " (1 - 3)" << endl;
        cin >> priority[i];
    }
    
    // sorting based on priority
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(priority[i] > priority[j])
            {
                temp = task[i];
                task[i] = task[j];
                task[j] = temp;
                
                temp = duration[i];
                duration[i] = duration[j];
                duration[j] = temp;
                
                temp = priority[i];
                priority[i] = priority[j];
                priority[j] = temp;
                
                tempName = taskName[i];
                taskName[i] = taskName[j];
                taskName[j] = tempName;
            }
        }
    }
    
    // if priority is the same, sort based on duration
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if((priority[i] == priority[j]) && (duration[i] > duration[j]))
            {
                temp = task[i];
                task[i] = task[j];
                task[j] = temp;
                
                temp = duration[i];
                duration[i] = duration[j];
                duration[j] = temp;
                
                temp = priority[i];
                priority[i] = priority[j];
                priority[j] = temp;
                
                tempName = taskName[i];
                taskName[i] = taskName[j];
                taskName[j] = tempName;
            }
        }
    }
    
    cout << endl << endl << "ORDER OF TASKS: " << endl << endl << endl;
    for(i = 0; i < n; i++)
    {
        cout << "Task #" << i+1 <<": " << taskName[i] << endl;
    }
}

