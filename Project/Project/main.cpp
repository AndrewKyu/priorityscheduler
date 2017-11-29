//
//  main.cpp
//  Project
//
//  Created by Cindy Wang on 11/2/17.
//  Copyright © 2017 Cindy Wang. All rights reserved.
//



#include <iostream>
#include <string>
//#include "scheduler.h"
#include "queue.hpp"
using namespace std;

/*
 FCFS - make a queue
 Priority Weight - Priority queue
 Round Robin -
 
 */


int main()
{
    int x;
    //scheduler test;
    int numTask;
    string task;
    makeQueue FCFS;
    
    while (true)
    {
        // Menu
        cout << "-------------------------------------------" << endl;
        cout << "MENU: " << endl;
        cout << "-------------------------------------------" << endl;
        // cout << "1. Add a Task" << endl;
        cout << "1. Prioritize by using First Come First Serve " << endl; //Andrew Kyu
        cout << "2. Prioritize by using Shortest Job First " << endl;
        cout << "3. Prioritize by using Priority Weight " << endl;
        cout << "4. Prioritize by using Round Robin " << endl; // Andrew Kyu
        cout << "5. Prioritize by using Multilevel Queue Scheduling " << endl;
        cout << "6. Quit Program " << endl;
        cout << "-------------------------------------------" << endl;
        cin >> x;
        
        if (x == 1)
        {
            //string task;
            // queueFCFS test;
            
            //int numTask;
            int count;
            cout<<"Please input the number of tasks"<<endl;;
            cin>>numTask;
            cin.ignore();
            
            
            for(count = 0; count < numTask; count++){
                cout<<"Please insert task"<<endl;
                getline(cin, task);
                FCFS.enqueue(task);
            }
            
            FCFS.printQueue(numTask);
        }
        else if (x == 2)
        {
        }
        else if (x == 3)
        {
            //priorityScheduling();
        }
        else if (x == 4)
        {
            //test.rrScheduling();
            ///priorityScheduling();
        }
        else if (x == 5)
        {
        }
        else if (x == 6)
        {
            //FCFS.printQueue(numTask);
            cout << "Program Ending" << endl;
            break;
        }
        else
        {
            cout << "Please insert a valid option." << endl;
            continue;
        }
    }
}

