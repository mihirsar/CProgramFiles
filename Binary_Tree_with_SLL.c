#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node{
    char data;
    struct node *left, *right;
}node;

void main(){
    node* T;//root of tree
    node *P, *q;

    //Address of first node is T
    T = (node*)malloc(sizeof(node));
    T->left = NULL;
    T->right = NULL;
    T->data = 'A';

    //Get new node with addres P at left node of T
    P = (node*)malloc(sizeof(node*));
    P->left = NULL;
    P->right = NULL;
    P->data = 'B';
    T->left = P;

    //New node at left of P
    q = (node*)malloc(sizeof(node));
    q->left = NULL;
    q->right = NULL;
    q->data = 'C';
    P->left = q;
}