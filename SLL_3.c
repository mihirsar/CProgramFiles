//Deleting node at nth posn
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head;

void Insert(int data, int n){
    struct node*temp1 = (struct node*)malloc(sizeof(struct node));
    temp1->data= data;
    temp1->next = NULL;
    if (n==1){
        temp1->next = head;
        head = temp1;
        return;
    }
    else{
        struct node* temp2 = head;
        for (int i=0; i<(n-2); i++){
        temp2 = temp2->next;
    }
        temp1->next = temp2->next;
        temp2->next = temp1;
    }
    
}

void Delete(int n){
    struct node*temp1 = head;
}

void Print(){
    struct node* temp = head;
    printf("List is: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

