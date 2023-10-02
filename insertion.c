#include<stdio.h>

void printarr(int arr[], int len){
    for (int k=0; k<len; k++)
    printf("%d ", arr[k]);
    printf("\n");
}
int main(){
    int arr[] = {250, 5, 7, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<len; i++){
        int f1 = arr[i];
        int j = i-1;
        while(j>=0 && f1<arr[j]){
        arr[j+1]=arr[j]; 
        printarr(arr, len);  
        j--;             
        }
        arr[j+1]=f1;
        printarr(arr, len);
    }
    return 0; 
}