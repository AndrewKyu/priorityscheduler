//
//  main.cpp
//  Project
//
//  Created by Cindy Wang on 11/2/17.
//  Copyright © 2017 Cindy Wang. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int x;
    
    // user chooses how they would like their tasks to be sorted
    while (true)
    {
        // Menu
        cout << "-------------------------------------------" << endl;
        cout << "HOW WOULD YOU LIKE YOUR TASKS SORTED: " << endl;
        cout << "-------------------------------------------" << endl;
        cout << "1. Prioritize by using First Come First Serve " << endl;
        cout << "2. Prioritize by using Shortest Job First " << endl;
        cout << "3. Prioritize by using Priority Weight " << endl;
        cout << "4. Prioritize by using Round Robin " << endl;
        cout << "5. Prioritize by using Multilevel Queue Scheduling " << endl;
        cout << "6. Quit Program" << endl;
        cout << "-------------------------------------------" << endl;
        cin >> x;
        
        if (x == 1)
        {
        }
        
        else if (x == 2)
        {
        }
        
        else if (x == 3)
        {
        }
        
        else if (x == 4)
        {
        }
        
        else if (x == 5)
        {
        }
        
        else if (x == 6)
        {
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
