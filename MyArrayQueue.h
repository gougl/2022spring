#ifndef MYARRAYQUEUE_H
#define MYARRAYQUEUE_H
#include <stdlib.h>
#define Max 10
typedef int elemtype;
typedef struct arrayqueue{
    elemtype *base;
    int front, rear;
}myqueue;

void initial_queue(myqueue *q){
    q->base = (elemtype *)malloc(sizeof(elemtype)*Max);
    q->front = q->rear = 0;
}

void enqueue(myqueue *q, elemtype e){
    q->base[q->rear++] = e;
}

elemtype dequeue(myqueue *q){
    return q->base[q->front++];
}

#endif