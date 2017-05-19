//
//  main.cpp
//  C++PrimerPlusC4
//
//  Created by zhanghenan on 2017/5/16.
//  Copyright © 2017年 HN. All rights reserved.
//

#include <iostream>

char * getName(){
    char temp [80];
    std::cout << "Enter the name:\n";
    std::cin >> temp;
    
    char *pn = new char [strlen(temp) + 1];
    strcpy(pn, temp);
    return pn;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char *name;
    name = getName();
    std::cout << *(name + 1) <<" at " << (int *)name <<std::endl;
    delete name;
    
    return 0;
}

