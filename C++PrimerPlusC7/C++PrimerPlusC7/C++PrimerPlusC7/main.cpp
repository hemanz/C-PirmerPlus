//
//  main.cpp
//  C++PrimerPlusC7
//
//  Created by zhanghenan on 2017/5/23.
//  Copyright © 2017年 HN. All rights reserved.
//

#include <iostream>

double betsy(int);
double pam(int);
void estimate(int lines,double (*pf)(int));

int main(int argc, const char * argv[]) {
    int code;
    std::cout << "How many lines of code do you need?";
    std::cin  >> code;
    std::cout << "Here's Besty's estimate:\n";
    estimate(code, betsy);
    std::cout << "Here's Pam's estimate: \n";
    estimate(code, pam);
    return 0;
}

double betsy(int lns){
    return 0.05 * lns;
}

double pam(int lns){
    return 0.03 * lns + 0.004 * lns * lns;
}

void estimate(int lines,double (*pf)(int)){
    std::cout << lines << " lines will take ";
    std::cout << (*pf)(lines) << " hours \n";
}
