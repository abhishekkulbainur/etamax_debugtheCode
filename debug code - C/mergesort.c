#include <stdio.h>
#include <stdlib.h>
#define max 100

int arr[max], temp;

void merge(int low, int mid, int high){
//made k = 0 instead of k = low and messed with n1 and n2 conditions.
    int i, j, k = 0;
    int n1 = mid - low;
    int n2 = high - mid + 1;

    int L[n1], R[n2];
    for(i = 0; i < n1; i++)
        L[i] = arr[low + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[mid + j + 1];

    i = j = 0;
    while(i < n1 && j < n2){
        if(L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while(i < n1)
            arr[k++] = L[i++];
    while(i < n1 && j < n2)
            arr[k++] = R[j++];
}

void mergeSort(int low, int high){
    if(low < high){
        int mid = (low + high)/2;
//removed one recursion here
        mergeSort(mid + 1, high);
        merge(low, mid, high);
    }
}

void main(){
    int n, temp;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("\nEnter values of array:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
//here isntead of n+1 its n
    mergeSort(0, n);

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
