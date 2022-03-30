#ifndef BTREE_H
#define BTREE_H
#include <stdio.h>
#include <stdlib.h>
typedef char elemtype1;
typedef struct btnode{
    elemtype1 data;
    btnode *lchild, *rchild;
}BTnode, *btree;
 
 btree create_BTree(){
     BTnode *t = (BTnode *)malloc(sizeof(BTnode));
     t->data = 'A';
     BTnode *s = (BTnode *)malloc(sizeof(BTnode));
     s->data = 'B';
     s->lchild = NULL;
     t->lchild = s;
     BTnode *m = (BTnode *)malloc(sizeof(BTnode));
     m->data = 'C';
     m->lchild = NULL;
     m->rchild = NULL;
     s->rchild = m;
     BTnode *n = (BTnode *)malloc(sizeof(BTnode));
     n->data = 'D';
     n->lchild = NULL;
     n->rchild = NULL;
     t->rchild = n;
     return t;
 }

void preorder(BTnode *t){
    if(t){
        printf("%c", t->data);
        preorder(t->lchild);
        preorder(t->rchild);
    }
}

void inorder(BTnode *t){ // i
    if(t){// if(i<Max)
        inorder(t->lchild); // 2*i
        printf("%c",t->data);
        inorder(t->rchild); // 2*i+1
    }
}

void postorder(BTnode *t){
    if(t){
        postorder(t->lchild);
        postorder(t->rchild);
        printf("%c",t->data);
    }
}

int leafnumber(BTnode *t){

    if(!t)
        return 0;
    if(t->lchild == NULL && t->rchild == NULL)
        return 1;
    else
        return leafnumber(t->lchild) + leafnumber(t->rchild);
}

int getDepth(BTnode *t){
    int m,n;

    if(!t)
        return 0;
    if(t->lchild == NULL && t->rchild == NULL)
        return 1;
    else
        m = getDepth(t->lchild);
        n = getDepth(t->rchild);
        return  m>n  ? m+1 : n+1;
}

void inorder_stack(BTnode *t){
    BTnode *s[10];
    int top = 0;
    BTnode *p = t;
    do{
        while(p){
            s[top++] = p;
            p = p->lchild;
        }
        p = s[--top];
        printf("%c",p->data);
        p = p->rchild;
    }while(top || p);
    
}

#endif