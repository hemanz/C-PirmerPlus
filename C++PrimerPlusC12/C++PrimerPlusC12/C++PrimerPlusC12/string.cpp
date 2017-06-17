//
//  string .cpp
//  C++PrimerPlusC12
//
//  Created by zhanghenan on 2017/6/5.
//  Copyright © 2017年 HN. All rights reserved.
//
#include <cstring>
#include "string.hpp"

using std::cout;
using std::cin;

int String ::num_string = 0;

int String::HowMany()
{
    return num_string;
}

String ::String (const char *s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_string++;
    cout << num_string << ": \"" << str << "\" object created\n";
}

String ::String (const String  &st)
{
    num_string++;
    len = st.len;
    str = new char [len + 1];
    std::strcpy(str, st.str);
    cout << num_string << ": \"" << str << "\" object created\n";
}

String ::String ()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_string++;
}

String ::~String ()
{
    cout << "\"" << str << "\" object deleted,";
    --num_string;
    cout << num_string << " left\n";
    delete []str;
}

String  & String ::operator=(const String &st)
{
    if (this == &st)
        return *this;
    delete str;
    len = st.len;
    str = new char [len + 1];
    std::strcpy(str, st.str);
    return *this;
}

std::ostream & operator<<(std::ostream & os, const String  &st)
{
    os << st.str;
    return os;
}


