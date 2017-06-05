//
//  stonewt.hpp
//  C++PrimerPlusC11
//
//  Created by zhanghenan on 2017/6/5.
//  Copyright © 2017年 HN. All rights reserved.
//

#ifndef stonewt_hpp
#define stonewt_hpp

#include <stdio.h>
class Stonewt{
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;

public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
};
#endif /* stonewt_hpp */
