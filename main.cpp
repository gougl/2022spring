//***** data structures 2022 spring ***
#include <stdio.h>
#include<iostream>
#include "MyArrayList.h"
#include "MyLinkedList.h"
#include "MyArrayStack.h"
#include "Dec2Bin.h"
#include "btree.h"
#include "bst.h"
using namespace std;
int main(){
    // MyArray a;
    // initial_MAL(&a);
    // printf("%d,%d\n",a.length, a.SIZE);

    // insert_atPos(&a, 0, 1);
    // insert_atPos(&a, 0, 2);
    // insert_atPos(&a, 0, 3);
    // cout << del_atPos(&a,1) << endl;
    // display(a);
    // cout << search(a,4) << endl;

    // Head a, *b;
    // initial_ls(&a);
    // cout << isEmpty(&a) << endl;
    // b = (Head *)malloc(sizeof(Head));
    // initial_ls(b);
    // cout << isEmpty(b) << endl;

    // insert_First(&a, 3);
    // insert_First(&a, 2);
    // insert_First(&a, 1);
    // display_ls(&a);
    // cout << remove_first(&a)  << endl;
    // cout << remove_first(&a)  << endl;

//     mystack a, b;
//     initial_stack(&a);
//     push(&a, 1);
//     push(&a, 2);
//     push(&a, 3);

//     cout << peek(&a) << endl;
//     cout << pop(&a) << endl;
//    cout << pop(&a) << endl;
//    cout << pop(&a) << endl;

//     dec2bin(16);

        // BTnode *t = create_BTree();
        // preorder(t);
        // cout << endl;
        // inorder(t);
        // cout << endl;
        // postorder(t);
        // cout << endl;

        // cout << leafnumber(t) << endl;
        // cout << getDepth(t) << endl;
        // inorder_stack(t);
        // cout << endl;
        bst a;
        initial_bst(&a);
        insert_bst(&a, 10);
        insert_bst(&a, 20);
        insert_bst(&a, 6);
        insert_bst(&a, 5);
        insert_bst(&a, 8);
        insert_bst(&a, 15);
        insert_bst(&a, 13);
        insert_bst(&a, 25);

        cout << search_bst(&a, 10) << endl;
}
