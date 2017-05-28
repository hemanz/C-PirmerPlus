//
//  stock10.cpp
//  C++PrimerPlusC10
//
//  Created by zhanghenan on 2017/5/28.
//  Copyright © 2017年 HN. All rights reserved.
//
#include <iostream>
#include <stdio.h>
#include "stock10.h"

Stock::Stock()
{
    std::cout << "Default constructor called\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
