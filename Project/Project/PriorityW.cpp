//
//  PriorityW.cpp
//  Project
//
//  Created by Natalie tom on 11/28/17.
//  Copyright © 2017 Cindy Wang. All rights reserved.
//

#include "PriorityW.hpp"
#include <cstdio>
#include <cstring>
#include <cstdlib>

#include <iostream>
using namespace std;

Priority_Queue ::Priority_Queue()
{
    frnt = NULL;
}
/*
 * Insert into Priority Queue
 */
void Priority_Queue:: insert(string task, int priority)
{
    node *temp, *q;
    temp = new node;
    temp->info = task;
    temp->priority = priority;
    if (frnt == NULL || priority < frnt->priority)
    {
        temp->link = frnt;
        frnt = temp;
    }
    else
    {
        q = frnt;
        while (q->link != NULL && q->link->priority <= priority)
            q=q->link;
        temp->link = q->link;
        q->link = temp;
    }
}
/*
 * Print Priority Queue
 */
void Priority_Queue:: display()
{
    node *ptr;
    ptr = frnt;
    if (frnt == NULL)
        cout<<"Your schedule is empty\n";
    else
    {	cout<<"\nYour schedule is:\n";
        cout<<"Priority       Task\n";
        while(ptr != NULL)
        {
            cout<<ptr->priority<<"\t\t\t"<<ptr->info<<endl;
            ptr = ptr->link;
        }
        cout << endl;
    }
}
