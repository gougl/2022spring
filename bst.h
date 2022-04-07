// implement by copilot
#ifndef BST_H
#define BST_H
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
typedef char elemtype1;
typedef struct bstnode{
    elemtype1 data;
    struct bstnode *left;
    struct bstnode *right;
}bst;

// initialize the bst
void initial_bst(bst *t){
    t->left = NULL;
    t->right = NULL;
}

// insert a new element into the bst
void insert_bst(bst *t, elemtype e){
    if(t->left == NULL){
        t->left = (bst *)malloc(sizeof(bst));
        initial_bst(t->left);
        t->left->data = e;
    }
    else if(t->right == NULL){
        t->right = (bst *)malloc(sizeof(bst));
        initial_bst(t->right);
        t->right->data = e;
    }
    else{
        if(e < t->data)
            insert_bst(t->left, e);
        else
            insert_bst(t->right, e);
    }
}

// remove an element from the bst
void remove_bst(bst *t, elemtype e){
    if(t->left == NULL && t->right == NULL){
        free(t);
        t = NULL;
    }
    else if(t->left == NULL){
        bst *temp = t->right;
        free(t);
        t = temp;
    }
    else if(t->right == NULL){
        bst *temp = t->left;
        free(t);
        t = temp;
    }
    else{
        bst *temp = t->right;
        while(temp->left != NULL)
            temp = temp->left;
        t->data = temp->data;
        remove_bst(temp, temp->data);
    }
}

// preorder traversal of the bst
void preorder_bst(bst *t){
    if(t == NULL)
        return;
    printf("%c ", t->data);
    preorder_bst(t->left);
    preorder_bst(t->right);
}

// inorder traversal of the bst
void inorder_bst(bst *t){
    if(t == NULL)
        return;
    inorder_bst(t->left);
    printf("%c ", t->data);
    inorder_bst(t->right);
}

// search an element in the bst
int search_bst(bst *t, elemtype e){
    if(t == NULL)
        return 0;
    if(t->data == e)
        return 1;
    else if(e < t->data)
        return search_bst(t->left, e);
    else
        return search_bst(t->right, e);
}
#endif