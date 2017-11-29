//
//  queue.hpp
//  Project
//
//  Created by Andrew Kyu on 11/27/17.
//  Copyright © 2017 Cindy Wang. All rights reserved.
//

#ifndef queue_hpp
#define queue_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
#define SIZE 10

class makeQueue{
    
    string *arr;
    int capacity;
    int front;
    int rear;
    int count;
    
public:
    makeQueue(int size = SIZE);
    
    void dequeue();
    void enqueue(string x);
    string peek();
    int size();
    bool isEmpty();
    bool isFull();
    void printQueue(int tasknum);
};

#endif /* queue_hpp */


