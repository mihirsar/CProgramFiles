#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr){
    
    if (ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(struct stack *ptr){
    if (ptr->top ==  int size - 1 ){

    }
}

int main(){
    struct stack *s;
    s->size = 8;
    s->top = -1;
    s->arr = (int*)malloc(s->size *sizeof(int));

}