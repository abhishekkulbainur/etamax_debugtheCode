#include<stdio.h>
#include<conio.n> //(missing #include<math.h>)(conio.n is error, it should be conio.h)
void main() {
     int n;
     printf("Please enter a number: '');
     scanf("%i" &n);
     int result = pow(n, 3);
     printf("result is %i", result);
     return 0;
     }

