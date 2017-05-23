//
//  main.cpp
//  C++PrimerPlusC7
//
//  Created by zhanghenan on 2017/5/23.
//  Copyright © 2017年 HN. All rights reserved.
//

#include <iostream>
char * buildstr(char c, int n);

int main(int argc, const char * argv[]) {
    int times;
    char ch;
    
    std::cout << "Enter a character";
    std::cin >> ch;
    std::cout << "Enter an interger";
    std::cin >> times;
    
    char *ps = buildstr(ch, times);
    std::cout << ps << std::endl;
    delete ps;
    
    return 0;
}

char * buildstr(char c, int n){
    char *pstr = new char[n + 1];
    pstr[n] = '\0';
    while (n-- > 0) {
        pstr[n] = c;
    }
    return pstr;
}
