//
//  string1.hpp
//  C++PrimerPlusC12
//
//  Created by zhanghenan on 2017/6/22.
//  Copyright © 2017年 HN. All rights reserved.
//

#ifndef string1_hpp
#define string1_hpp

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
    static const int CINLIM = 80;

public:
    String(const char *s);
    String();
    String(const String &);
    ~String();
    int length () const{return len;}
    
    String & operator=(const String &);
    String & operator=(const char *);
    char & operator[](int i) ;
    const char & operator[](int i) const;
    
    friend bool operator<(const String &st, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st, const String &st2);
    friend ostream & operator <<(ostream &os, const String st);
    friend istream & operator >>(istream &is, const String st);

    static int HowMany();
};
#endif /* string1_hpp */
