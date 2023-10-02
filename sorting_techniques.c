#include<stdio.h>
#include<stdlib.h>
void printarray(int* A, int n){
    for (int i=0; i<n; i++){
        printf("%d\t", A[i]);
    }
}

// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b; 
//     *b = temp;
// }

void selectionsort(int *A, int n){
    //int A[] = {12, 54 , 65, 7, 23, 9};
    int indexofmin, temp;
    for (int i=0; i<n-1; i++){
        indexofmin = i;
        for (int j=i+1; j<n; j++){
            if (A[j]<A[indexofmin]){
                indexofmin = j;
            }
        }
        //swap(A[i], A[indexofmin]);
        temp = A[i];
        A[i] = A[indexofmin];
        A[indexofmin] = temp;  
    }
    
}

void bubblesort(int *A, int n){
    int isSorted = 0;
    for (int i=0; i<n-1; i++){//for no. of passes
        printf("\nNo. of passes: %d", i+1);
        isSorted = 1;
        for(int j=0; j<n-1-i; j++){
            if(A[j]>A[j+1]){
                //swap(&A[j], &A[j+1]);
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted){
            return;
        }
    }
}

void insertionsort(int *A, int n){
    //loop for passes
    for (int i=0; i<=n-1; i++){
        //loop for each pass
        int key = A[i];
        int j = i-1;
        while (j>=0 && A[j]>key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

void merge(int A[], int mid, int low, int high){
    int i, j, k, B[100];
    i = low; 
    j = mid+1;
    k = low;
    while(i<=mid && j<=high){
        if (A[i]<A[j]){
            B[k] = A[i];
            i++;
            k++;
        }
        else{
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        B[k] = A[i];
        k++;
        i++;
    }
    while (j<=high){
        B[k] = A[j];
        j++, k++;
    }
    for (int i = low; i<=high; i++){
        A[i] = B[i];
    }
}

void mergesort(int A[], int low, int high){
    int mid;
    if(low<high){
        mid = (low+high)/2;
        mergesort(A, low, mid);
        mergesort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}

int partition(int A[], int low, int high){
    int pivot = A[low];
    int i = low+1;
    int j = high;
    int temp;
    do{
        while (A[i]<=pivot){
        i++;
    }
    while(A[j]>pivot){
        j--;
    }

    if (i<j){
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
}while (i<j);
    //swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j; 
}

void quicksort(int A[], int low, int high){
    int partition_index;
    if (low<high){
        partition_index = partition(A, low, high);
        quicksort(A, low, partition_index-1);
        quicksort(A, partition_index+1, high);
    }
}
//Searching Techniques
int LinearSearch(int arr[], int size, int element){
    for(int i=0; i<size; i++){
        if (arr[i]==element){
            return i+1;
        }
    }
    return -1;
    
}

int BinarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
            return low;
        }
        else{
            high = mid -1;
            return high;
        }
    } 
    return -1;
}

int main(){
    //int A[] = {12, 54 , 65, 7, 23, 9};
    int A[] = {1,2,4,5,6,7,8,9,10,11};
    int size = sizeof(A)/sizeof(int);
    int element = 7;
    int searchindex = LinearSearch(A, size, element);
    //int searchindex = BinarySearch(A, size, element);
    printf("Element found at :%d", searchindex);
    //int A[] = {1, 2, 3, 4, 5, 0};
    // int n = 6;
    // printf("Before sorting: ");
    //printarray(A, n);
    //bubblesort(A, n);
    //selectionsort(A, n);
    // insertionsort(A, n);
    // printf("\nAfter sorting: ");
    // printarray(A, n);
    return 0;
}