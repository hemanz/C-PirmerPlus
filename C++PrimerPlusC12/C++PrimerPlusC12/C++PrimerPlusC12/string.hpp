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

using std::ostream;
using std::istream;

class String
{
private:
    char *str;
    int len;
    static int num_string;
    static const int LINLIM = 80;

public:
    //constructors and other methods
    String(const char *s);
    String(const String &st);
    String();
    ~String();
    int length () const {return len;}
    
    //overloaded operator methods
    String & operator=(const char *);
    String & operator=(const String &st);
    char & operator[](int i);
    const char & operator[](int i) const;
    friend std::ostream & operator<<(ostream &os, const String &st);
    friend std::istream & operator>>(istream &is, String &st);
    static int HowMany();
};
#endif /* stringbad_hpp */
