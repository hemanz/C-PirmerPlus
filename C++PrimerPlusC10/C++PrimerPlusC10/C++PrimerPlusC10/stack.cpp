//
//  stack.cpp
//  C++PrimerPlusC10
//
//  Created by zhanghenan on 2017/6/3.
//  Copyright © 2017年 HN. All rights reserved.
//

#include <stdio.h>
#include "stack.h"

Stack::Stack()
{
    top = 0;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item &item)
{
    if (top < MAX) {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item &item)
{
    if (top > 0) {
        item = items[top--];
        return true;
    }
    else
        return false;
}
