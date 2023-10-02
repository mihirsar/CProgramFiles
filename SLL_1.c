#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* head;

void Insert(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    if (head != NULL) temp->next = head;
    head = temp;//at first node
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

int main(){
    head = NULL;
    printf("Enter the amount of numbers you want: ");
    int n, i, x;
    scanf("%d", &n);
    for (i=0; i<n; i++){
        printf("Enter the number: ");
        scanf("%d", &x);
        Insert(x);
        Print();
    }
}