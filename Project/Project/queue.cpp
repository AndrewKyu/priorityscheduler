//
//  queue.cpp
//  ScratchWorkProject
//
//  Created by Andrew Kyu on 11/16/17.
//  Copyright © 2017 AndrewKyuProjects. All rights reserved.
//

#include "queue.hpp"
#include <iostream>
#include <string>
using namespace std;

makeQueue::makeQueue(int size)
{
    arr = new string[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}

bool makeQueue::isEmpty()
{
    return (size() == 0);
    
}

bool makeQueue::isFull()
{
    return (size() == capacity);
}

int makeQueue::size(){
    return count;
}

string makeQueue::peek(){
    if(isEmpty()){
        cout<<"Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
        
    }
    return arr[front];
}

void makeQueue::dequeue()
{
    if(isEmpty()){
        cout<<"There's nothing in the queue\n";
        exit(EXIT_FAILURE);
    }
    
    cout<<"Removing "<< arr[front]<<'\n';
    front = (front + 1) % capacity;
    count--;
    
}

void makeQueue::enqueue(string item)
{
    if(isFull())
    {
        cout<<"Queue is full\n";
        exit(EXIT_FAILURE);
    }
    
    //cout<<"Inserting "<<item<<'\n';
    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}

void makeQueue::printQueue(int tasknum){
    
    cout<<endl;
    cout<<"This is your schedule: "<<endl;
    for(int x = 0; x<tasknum; x++){
        cout<<arr[x]<<endl;
        
    }
    //    cout<<front<<endl;
    //    cout<<endl;
    //    while(front != rear)
    //    {
    //        cout<<arr[front]<<endl;
    //        front++;
    //        if(front == rear)
    //            break;
    //
    //        }
    
    
}

