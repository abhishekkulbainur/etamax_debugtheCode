#include<stdio.h>
int main() {
     float n;
     int arr[n]; 
     for (int i=0; i<n; i++) {
          printf("arr[i] = ");
          scanf("%i", &arr[i]);
          }
     scanf("%d", &n); //(scanf("%d", &n);) (this line should be between array declaration and input for loop)
     for (int i=0; i<n; i++) {
          printf("%d ", arr[i]);
          }
     }

