//
//  roundrobin.hpp
//  Project
//
//  Created by Andrew Kyu on 11/29/17.
//  Copyright © 2017 Cindy Wang. All rights reserved.
//

#ifndef roundrobin_h
#define roundrobin_h
#include <iostream>
#include <string>
using namespace std;


class roundRobin
{
    string taskName;
    int duration;

public:
    void roundrobinScheduler();
};

#endif /* roundrobin_h */
