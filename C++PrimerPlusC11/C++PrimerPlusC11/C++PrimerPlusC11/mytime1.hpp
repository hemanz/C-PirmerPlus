//
//  mytime1.hpp
//  C++PrimerPlusC11
//
//  Created by zhanghenan on 2017/6/4.
//  Copyright © 2017年 HN. All rights reserved.
//

#ifndef mytime1_hpp
#define mytime1_hpp

#include <stdio.h>

class Time {
    
private:
    int hours;
    int minutes;
    
public:
    Time ();
    Time (int h, int m = 0);
    void AddMin (int m);
    void AddHr (int h);
    void Reset (int h = 0, int m = 0);
    Time operator+ (const Time  &t) const;
    void Show() const;
};

#endif /* mytime1_hpp */
