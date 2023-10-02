#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

void SLLTraversal(struct node*ptr){
    while (ptr!=NULL){
        printf("Element = %d\n", ptr->data);
        ptr = ptr->next;
        }
}
//Insertion Operations
//insert at beg
struct node * insertAtFirst(struct node *head, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr; 
}

//insert in index
struct node* inseratindex(struct node*head, int data, int index){
    struct node*ptr = (struct node*)malloc(sizeof(struct node));
    struct node*p = head;
    int i=0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    ptr->data = data;
    p->next = ptr;
    return head;
}
//insert at end
struct node* insertatend(struct node*head, int data){
    struct node*ptr = (struct node*)malloc(sizeof(struct node));
    struct node*p = head;
    ptr->data= data;
    while(p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
//Deletion Operations
//delete at beginning
struct node* deletefirst(struct node*head){
    struct node*ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

//delete at index
struct node* deleteindex(struct node *head, int index){
    struct node* p = head;
    struct node*q = head->next;
    for (int i=0; i<index-1; i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
//dele at end
struct node* deleteend(struct node*head){
    struct node*p = head;
    struct node*q = head->next;
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    } 
    p->next = NULL;
    free(q);
    return head;
}

//deleting by value
struct node* deleteval(struct node* head, int value){
    struct node*p = head;
    struct node*q = head->next;
    while (q->data != value && q->next != NULL){
        p = p->next;
        q = q->next;
    }
    if (q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}
int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;
    //Allocating memory for nodes in sll in heap
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    //Link 1st & 2nd node
    head->data = 7;
    head->next = second;

    //Link 2nd & 3rd node
    second->data = 11;
    second->next = third;

    //Link the list at 4th node
    third->data = 66;
    third->next = fourth;

    //Terminate the list at 4th node
    fourth->data = 77;
    fourth->next = NULL;

    //printing list
    SLLTraversal(head);
    printf("After calling function:\n");
    //head = insertAtFirst(head, 56);
    //head = inseratindex(head, 22, 2);
    //head= insertatend(head, 33);
    //head = deletefirst(head);
    //head = deleteindex(head, 3);
    //head = deleteend(head);
    head = deleteval(head, 66);
    SLLTraversal(head);

    return 0;
}