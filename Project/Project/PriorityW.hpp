//
//  PriorityW.hpp
//  Project
//
//  Created by Natalie tom on 11/28/17.
//  Copyright © 2017 Cindy Wang. All rights reserved.
//

#ifndef PriorityW_hpp
#define PriorityW_hpp

#include <stdio.h>
#include <cstdio>
#include <cstring>
#include <cstdlib>

#include <iostream>
using namespace std;


struct node
{
    int priority;
    string info;
    struct node *link;
};
/*
 * Class Priority Queue
 */
class Priority_Queue
{
private:
    node *frnt;
public:
    Priority_Queue();
    void insert(string task, int priority);
    void display();
};

#endif /* PriorityW_hpp */

