//
//  stonewt.cpp
//  C++PrimerPlusC11
//
//  Created by zhanghenan on 2017/6/5.
//  Copyright © 2017年 HN. All rights reserved.
//
#include <iostream>
#include "stonewt.hpp"

using std::cout;

Stonewt::Stonewt(double lbs)
{
    stone = int (lbs);
    pds_left = int (lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn;
}

Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{
    
}

void Stonewt::show_stn() const
{
    cout << stone << " stone" <<  pds_left << "pounds\n";
}

void Stonewt::show_lbs() const
{
    cout << pounds <<  "pounds\n";
}
