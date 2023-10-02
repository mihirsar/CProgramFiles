#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node*next;
};
void linkedlisttraversal(struct Node*ptr){
    while(ptr!=NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }

void insertion(){}
    
}

int main(){
    struct Node*head;
    struct Node*second;
    struct Node*third;

    //Allocate memory for nodes in linked list in heap
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    
    //Link first and second nodes
    head->data = 7;
    head->next = second;

    //Link second and third nodes
    second->data = 11;
    second->next = third;

    //Terminate the list at third node
    third->data = 66;
    third->next = NULL;

    linkedlisttraversal(head);

    return 0;
}

