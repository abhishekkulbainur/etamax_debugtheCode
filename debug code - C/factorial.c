#include<stdio.h>

int fact(int n)
{
    if(n = 0)                 
    // BUG 1: assignment instead of comparison
    // FIX : if(n == 0)

        return 0;             
        // BUG 2: wrong base case value
        // FIX : return 1;

    else
        return n * fact(n-2); 
        // BUG 3: wrong recursion step
        // FIX : fact(n-1)
}

void main()
{
    int n=1;

    printf("Enter a no:");
    scanf("%d",n);            
    // BUG 4: missing '&' in scanf
    // FIX : scanf("%d", &n);

    printf("fact:%d",fact(n+1));   
    // BUG 3: wrong argument passed
    // FIX : fact(n)
}

