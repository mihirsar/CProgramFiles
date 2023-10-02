#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*left;
    struct node*right;
};

struct node* createnode(int data){
    struct node*n;
    n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

struct node* preorder(struct node* root){
    if (root!=NULL){
        printf("%d", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

struct node* postorder(struct node* root){
    if (root!= NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d", root->data);
    }
}

struct node* inorder(struct node* root){
    if(root != NULL){
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
}

struct node* search(struct node* root, int key){
    if (root == NULL){
        return NULL;
    }
    if (root->data == key){
        return root;}
    else if (key < root->data){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}

void insert(struct node* root, int key){
    struct node* prev = NULL;
    while(root != NULL){
        prev = root;
        if(key == root->data){
            printf("cannot insert %d, already in BST", key);
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
        struct node* new = createnode(key);
        if (key<prev->data){
            prev->left = new;
        }
        else{
            prev->right = new;
        }
    }
}

struct node* delete(struct node* root, int key){
    //search for the node to be deleted
    if (key < root->data){
        delete(root->left, key);
    }
    else{
        delete(root->right, key);
    }
    //deletion strategy
    
}

int main(){

}