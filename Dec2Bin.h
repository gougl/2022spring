#ifndef DEC2BIN_H
#define DEC2BIN_H
#include "MyArrayStack.h"
#include <iostream>
using namespace std;
void dec2bin(int x){
    mystack s;
    initial_stack(&s);
    while(x){
        push(&s, x%2);
        x = x/2;
    }

    while(!isEmpty_stack(&s)){
        cout << pop(&s);
    }

    cout << endl;
}

#endif