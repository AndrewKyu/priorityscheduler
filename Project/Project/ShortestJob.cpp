//
//  ShortestJob.cpp
//  Project
//
//  Created by Natalie tom on 11/28/17.
//  Copyright © 2017 Cindy Wang. All rights reserved.
//

#include "ShortestJob.hpp"
#include <cstdio>
#include <cstring>
#include <cstdlib>

#include <iostream>
using namespace std;

void shortestjob:: ShortestJobFirst(){
    string t[30];
    int dur_time[30],task[30],i,j,n,place,temp;
    cout<<"Enter number of tasks: ";
    cin>>n;
    cin.ignore();
    
    cout << "\nEnter task name: \n";
    for (i = 0; i<n;i++){
        getline(cin,t[i]);
    }
    
    cout<<"\nEnter duration: \n";
    for(i=0;i<n;i++)
    {
        cout<<"Task["<<i+1<<"]: ";
        cin>>dur_time[i];
        task[i]=i+1;
    }
    
    //Shortest First Sort
    for(i=0;i<n;i++)
    {
        place=i;
        for(j=i+1;j<n;j++)
        {
            if(dur_time[j]<dur_time[place])
                place=j;
        }
        
        temp=dur_time[i];
        dur_time[i]=dur_time[place];
        dur_time[place]=temp;
        
        temp=task[i];
        task[i]=task[place];
        task[place]=temp;
    }
    
    
    cout<<"\nThis is your schedule: ";
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<dur_time[i]<<"\t\t\t"<<t[i];
    }
    cout << endl;
}
