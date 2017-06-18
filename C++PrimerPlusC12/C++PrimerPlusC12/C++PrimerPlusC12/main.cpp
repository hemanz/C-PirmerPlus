//
//  main.cpp
//  C++PrimerPlusC12
//
//  Created by zhanghenan on 2017/6/5.
//  Copyright © 2017年 HN. All rights reserved.
//

#include <iostream>
#include "string.hpp"
using std::cout;

void callme1(String  &);
void callme2(String);

int main(int argc, const char * argv[]) {
    using std::endl;
    {
        cout << "Starting an inner block. \n";
        String  headline1("Celery Stalks at Midnight");
        String  headline2("Lettuce Prey");
        String  sports("Spinach Leaves Bowl for Dollars");
        cout << "headline1:" << headline1 << endl;
        cout << "headline2:" << headline2 << endl;
        cout << "sports:" << sports << endl;
        callme1(headline1);
        cout << "headline1:" << headline1 << endl;
        callme2(headline2);
        cout << "headline2:" << headline2 << endl;
        cout << "Initialize one object to another:\n";
        String  sailor = sports;
        cout << "sailor:" << sailor << endl;
        cout << "Assign one object to another:\n";
        String  knot;
        knot = headline1;
        cout << "knot:" << knot << endl;
        cout << "Exiting the Block";
    }
    return 0;
}

void callme1(String  &rsb)
{
    cout << "String passed by reference:\n";
    cout << "   \"" << rsb << "\"\n";
}

void callme2(String  sb)
{
    cout << "String passed by value:\n";
    cout << "   \"" << sb << "\"\n";
}

