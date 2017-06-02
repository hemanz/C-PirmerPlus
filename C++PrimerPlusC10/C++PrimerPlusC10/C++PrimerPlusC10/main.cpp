//
//  main.cpp
//  C++PrimerPlusC10
//
//  Created by zhanghenan on 2017/5/26.
//  Copyright © 2017年 HN. All rights reserved.
//

#include <iostream>
#include "stock10.h"

const int STKS = 4;
int main(int argc, const char * argv[]) {
    {
        Stock stocks[STKS] = {
            Stock("NanoSmart", 12, 20),
            Stock("Boffo Objects", 200, 2.0),
            Stock("Monolithic", 130, 3.25),
            Stock("Fleep Enterprise", 60, 6.5)
        };
        
        std::cout << "Stock holding: \n";
        int st;
        for (st = 0; st < STKS; st++)
            stocks[st].show();
        
        const Stock *top = &stocks[0];
        for (st = 1; st < STKS; st++)
            top = &top->topval(stocks[st]);
        
        std::cout << "Now the Most Valuble Holding is :\n";
        top->show();
    
    return 0;
    }
}
