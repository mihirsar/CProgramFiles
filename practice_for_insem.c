#include<stdio.h>
#include<stdlib.h>

void printarr(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d\t", arr[i]);
    }
}

//Searching Algos
int LinearSearch(int arr[], int size, int element){
    for (int i=0; i<size; i++){
        if (arr[i] == element){
            return i+1;
        }
    }
    return -1;
}

int BinarySearch(int arr[], int size, int element){
    int low = 0; 
    int high = size-1; 
    
    while(low<=high){
        int mid = (low+high)/2;
        if (arr[mid] == element){
            return mid+1;
        }
        if(arr[mid] < element){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

//Sorting ALgos
void selectionsort(int arr[], int size){
    int temp;
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if (arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

}

void bubblesort(int A[], int size){
    int temp;
    for(int i=0; i<size-1; i++){//no of passes
        for(int j=0; j<size-1-i; j++){//no of comparison in each pass
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

void insertionsort(int A[], int size){
    int key;
    for(int i=1; i<=size-1; i++){
        key = A[i];
        int j = i-1;
        while(j>=0 && A[j]>key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int partition(int A[], int low, int high){
    int temp;
    int pivot = A[low];
    int i = low+1;
    int j = high;
    do{
        while(A[i]<pivot){
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
    }while(i<j);
    
    //swap A[low] & A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}
void quicksort(int A[], int low, int high){
    int partitionindex;
    if(low<high){
        partitionindex = partition(A, low, high);
        quicksort(A, low, partitionindex - 1);//sort left subarray
        quicksort(A, partitionindex+1, high);//sort right subarray
    }
}

int main(){
    int A[6] = {10, 9, 8, 7, 1, 10};
    int size = sizeof(A)/sizeof(int);
    int element = 7;
    printf("Input Array is:\n");
    printarr(A, size);
    //selectionsort(A, size);
    //bubblesort(A, size);
    insertionsort(A, size);
    printf("\nSorted Array is: ");
    printf("\n");
    printarr(A, size);
    //int searchindex = LinearSearch(A, size, element);
    // int searchindex = BinarySearch(A, size, element);
    // printf("\nElement %d At Index: %d", element, searchindex);
    return 0;
}