//
//  stringbad.hpp
//  C++PrimerPlusC12
//
//  Created by zhanghenan on 2017/6/5.
//  Copyright © 2017年 HN. All rights reserved.
//

#ifndef stringbad_hpp
#define stringbad_hpp

#include <stdio.h>
#include <iostream>

class StringBad
{
private:
    char *str;
    int len;
    static int num_string;

public:
    StringBad(const char *s);
    StringBad(const StringBad &st);
    StringBad();
    ~StringBad();
    StringBad & operator=(const StringBad &st);
    friend std::ostream & operator<<(std::ostream &os, const StringBad &st);
};
#endif /* stringbad_hpp */
