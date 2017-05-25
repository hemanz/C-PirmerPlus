//
//  main.cpp
//  C++PrimerPlusC8
//
//  Created by zhanghenan on 2017/5/25.
//  Copyright © 2017年 HN. All rights reserved.
//

#include <iostream>

template <typename T>
void Swap(T &a,T &b);

template <class T>
T Add(T a,T b){
    return a + b;
}

int main(int argc, const char * argv[]) {
    int i = 10;
    int j = 20;
    std::cout << "i = " << i << " j = " << j << std::endl;
    std::cout << "Swap---" << std::endl;
    Swap(i, j);
    std::cout << "i = " << i << " j = " << j << std::endl;
    
    double x = 20.8;
    double y = 88.9;
    std::cout << "x = " << x << " y = " << y << std::endl;
    std::cout << "Swap---" << std::endl;
    Swap(x, y);
    std::cout << "x = " << x << " y = " << y << std::endl;

    int m = 6;
    double n = 10.02;
    std::cout << "Add(double,int) = " << Add<double>(m, n) << std::endl;
    return 0;
}

template <typename T>
void Swap(T &a,T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}
