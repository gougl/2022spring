#ifndef MYARRAYSTACK_H
#define MYARRAYSTACK_H
#define MAX 10
#include <stdlib.h>
typedef int elemtype;
typedef struct arraystack{
    elemtype *base;
    int top;
    int SIZE;
}mystack;

void initial_stack(mystack *s){
    s->base = (elemtype *)malloc(sizeof(elemtype)*MAX);
    s->top = 0;
    s->SIZE = MAX;
}

void push(mystack *s, elemtype e){
    s->base[s->top++] = e;
}

elemtype pop(mystack *s){
    return s->base[--s->top];
}

elemtype peek(mystack *s){
    return s->base[s->top - 1];
}

int isEmpty_stack(mystack *s){
    if(s->top == 0)
        return 1;
    return 0;
}

#endif 