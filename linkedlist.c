#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* head;//global variable so that it can be accessed anywhere

struct node* Insert(struct node * head,int x){
    struct node* temp, *ptr;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = head;
    return head;
}

void Print(struct node *head){
    struct node * temp = head;
    printf("List is: ");
    while (temp != NULL){
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    head == NULL;//empty list
    printf("How many no.s: ");
    int n, i, x;
    scanf("%d",&n);
    for (i=0; i<n; i++){
        printf("Enter any number: ");
        scanf("%d", &x);
        Insert(head, x);
        Print(head);
    }
    return 0;
}