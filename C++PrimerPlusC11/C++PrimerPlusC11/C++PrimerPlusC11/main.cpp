//
//  main.cpp
//  C++PrimerPlusC11
//
//  Created by zhanghenan on 2017/6/4.
//  Copyright © 2017年 HN. All rights reserved.
//

#include <iostream>
#include "mytime0.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;
    
    cout << "planning time = ";
    planning.Show();
    cout << endl;
    
    cout << "fixing time = ";
    fixing.Show();
    cout << endl;
    
    total = coding.Sum(fixing);
    
    cout << "coding.Sum(fixing) = ";
    total.Show();
    cout << endl;
    return 0;
}
