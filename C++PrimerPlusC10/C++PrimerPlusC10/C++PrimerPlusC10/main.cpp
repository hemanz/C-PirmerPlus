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
    {
        using std::cout;
        cout << "Using constructor to create new objects \n";
        Stock stock1("NanoSmart", 12, 20.0);
        stock1.show();
        
        Stock stock2 = Stock("Buffo Objects", 2, 2.0);
        stock2.show();
        
        cout << "Assingning stock1 to stcok2: \n";
        stock2 = stock1;
        cout << "Listing stock1 to stock2: \n";
        stock1.show();
        stock2.show();
        
        cout << "Using a constructor to reset an object \n";
        stock1 = Stock("Nifty Foods", 10, 50.0);
        cout << "Revised stock1:\n";
        stock1.show();
        cout << "Done" << std::endl;
    }
    return 0;
}
