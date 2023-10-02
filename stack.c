#include<stdio.h>
//#include<>

typedef struct stack{
    int data[10];
    int top;
}stack;

void initialize(stack *S){
    S->top = -1;
}

int isEmpty(stack *S){
    if(S->top == -1){
        return 1;
    }
    return 0;
}

int isFull(stack *S){
        if(S->top == 9)
        return 1;
    return 0;
}

void push(stack *S, int x){
    if(isFull == 1){
        printf("\nStack is Empty\n");
    }
    else{
        S->top = S->top+1;
        S->data[S->top] = x;
    }
}

int pop(stack *S){
    if(isEmpty == 1){
        print("\nStack Underflow\n");
    }
    else{
        int x = S->data[S->top];
        S->top = S->top-1;
        return x;
    }
}

int display_top(stack *S){
    if(isEmpty == 1){
        printf("\nStack Underflow");
    }
    else{
        return S->data[S->top];
    }
}

int main(){

}