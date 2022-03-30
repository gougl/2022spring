#ifndef MYARRAYLIST_H
#define MYARRAYLIST_H
#include<stdio.h>
#include <stdlib.h>
#define Max 100
typedef int elemtype;
typedef struct MyArrayList{
    elemtype *data;
    int length;
    int SIZE;
}MyArray;

void initial_MAL(MyArray *al){
    al->data = (elemtype *) malloc (sizeof(elemtype) * Max);
    al->length = 0;
    al->SIZE = Max;
}

void insert_atPos(MyArray *al, int pos, elemtype e){
    if(pos<0 || pos>al->length)
        return;
    if(al->length == 0 && pos == 0){
        al->data[0] = e;
    }
    else{
        for(int i=al->length-1; i>=pos; i--)
            al->data[i+1] = al->data[i];
        al->data[pos] = e;
        
    }
    al->length++;
}

// void push(MyArray *al, elemtype e){
//     insert_atPos(al,0,e);
// }

void display(MyArray al){
    for(int i=0; i<al.length; i++)
        printf("%d\n", al.data[i]);
}

elemtype del_atPos(MyArray *al, int pos){
    elemtype e = al->data[pos];
    for(int i=pos; i<al->length; i++)
        al->data[i] = al->data[i+1];
    al->length--;
    return e;
}

int search(MyArray al, elemtype key){
    for(int i=0; i<al.length; i++){
        if(al.data[i] == key)
            return 1;
    }
    return 0;
}



#endif