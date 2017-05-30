//
//  main.cpp
//  C++PrimerPlusC10
//
//  Created by zhanghenan on 2017/5/26.
//  Copyright © 2017年 HN. All rights reserved.
//

#include <iostream>
#include "stock10.h"

int main(int argc, const char * argv[]) {
    using std::cout;
    cout << "Using constructor to create new objects\n";
    Stock stock1("NanoSmart", 12, 20.0);
    stock1.show();
    return 0;
}
