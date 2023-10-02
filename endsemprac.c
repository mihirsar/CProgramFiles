#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//SLL Functions
struct node{
    int data;
    struct node* next;
};

void LLtraversal(struct node* ptr){
    while (ptr->next != NULL){
        printf("%d", ptr->data);
        ptr = ptr->next;
    }
    
}

struct node* LLinsertathead(struct node* head, int key){
    struct node* ptr = (struct node*) malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = key;
    return ptr;
}

struct node* LLinsertionatind(struct node* head, int key, int index){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));;
    struct node*p;
    int i = 0;
    while(i != index-1){
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    ptr->data = key; 
    p->next = ptr;
    return head;
}

struct node* LLinsertatend(struct node*head, int key){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = key;
    struct node*p = head;
    while(p->next = NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct node* LLdelatbeg(struct node* head){
    struct node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node* LLdelatind(struct node* head, int index){
    struct node* p = head;
    struct node* ptr = head->next;
    int i = 0;
    while(i != index-1){
        p = p->next;
        ptr = ptr->next;
        i++;
    }
    p->next = ptr->next;
    free(ptr);
    return head;
}
struct node* LLdelend(struct node* head){
    struct node* ptr1 = head;
    struct node* ptr2 = head->next;
    while(ptr2->next != NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    ptr1 = NULL;
    free(ptr2);
    return head;
}

//Stack Functions
//1. Using Arrays
struct stack{
    int size;
    int top;
    int data[25];
};

void initialize(struct stack* ptr){
    ptr->top = -1;
}

int isFull(struct stack* ptr){
    if (ptr->top == ptr->size-1){
        return 1;
    }   
    else{
        return -1;
    }
}

int isEmpty(struct stack* ptr){
    if (ptr->top == -1){
        return 1;
    }
    else{
        return -1;
    }
}

int push(struct stack* ptr, int key){
    if(isFull == 1){
        printf("Stack Overflow");
    }
    else{
        ptr->top = ptr->top+1;
        ptr->data[ptr->top] = key;
    }
}

int pop(struct stack* ptr){
    int x;
    if (isEmpty == 1){
        printf("Stack Underflow");
    }
    else{
        x = ptr->data[ptr->top];
        ptr->top = ptr->top - 1;
        return (x);
    }
} 

// Queue Functions
// 1. Using Array
struct queue{
    int data[20];
    int front, rear;
};

struct queue q1, *P;
P = &q1;

void initialize(struct queue *P){
    P->rear = -1;
    P->front = -1;
}

int isEmpty(struct queue *P){
    if (P->rear == -1){
        return 1;
    }
    else{
        return -1;
    }
}

int isFull(struct queue *P){
    if (P->rear == 19){
        return 1;
    }
    else{
        return -1;
    }
}

void enqueue(struct queue *P, int key){
    if(P->rear == -1){
        P->rear = P->front = 0;
        P->data[P->rear] = key;
    }
    else{
        P->rear = P->rear + 1;
        P->data[P->rear] = key;
    }
}

void dequeue(struct queue *P){
    int key;
    key = P->data[P->front];
    if(P->rear == P->front){
        P->rear = P->front = -1;
    }
    else{
        P->front = P->front+1;
    }
    return key;
}

//BST Ops
struct BSTnode{
    int data;
    struct BSTnode *left, *right;
};

struct BSTnode* initialize(){
    return(NULL);
}

struct BSTnode* Find(struct BSTnode* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root == key){
        return key;
    }
    if(key < root->data){
        return(Find(root->left, key));
    }
    else{
        return(Find(root->right, key));
    }
}

struct BSTnode* Insert(struct BSTnode* t, int key){
    if(t == NULL){
        t = (struct BSTnode*)malloc(sizeof(struct BSTnode));
        t->data = key;
        t->left = NULL;
        t->right = NULL;
        return t;
    }
    if(key < t->data){
        t->left = Insert(t->left, key);
        return t;
    }
    else{
        t->right = Insert(t->right, key);
        return t;
    }
}

// struct BSTnode* Delete(struct BSTnode* t, int key){
//     struct BSTnode* temp;
//     if (t == NULL){
//         printf("Element not found");
//         return t;
//     }

// }

 
int main(){
    //SLL
    struct node*head = (struct node*)malloc(sizeof(struct node));
    struct node*second = (struct node*)malloc(sizeof(struct node));
    struct node*third = (struct node*)malloc(sizeof(struct node));
    struct node*fourth = (struct node*)malloc(sizeof(struct node));

    //Assigning datas
    head->data = 11;
    head->next = second;

    second->data = 22;
    second->next = third;

    third->data = 33;
    third->next = fourth;

    fourth->data = 44;
    fourth->next = NULL; 

    //Stack 
    //1. Using Arrays
    return 0;
}