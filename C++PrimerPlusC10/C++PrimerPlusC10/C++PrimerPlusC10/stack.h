//
//  stack.h
//  C++PrimerPlusC10
//
//  Created by zhanghenan on 2017/6/3.
//  Copyright © 2017年 HN. All rights reserved.
//

#ifndef stack_h
#define stack_h

typedef unsigned long Item;

class Stack
{
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;

public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item &item);
    bool pop(Item &item);
};

#endif /* stack_h */
