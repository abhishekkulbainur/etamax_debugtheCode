#include <stdio.h>

int fib(int count,int a,int b) {
    if (count = 0)              
	// BUG 1: assignment instead of comparison
    // FIX : if (count == 0)
return;                  
    
    else
    {
    printf("%d\t",b);          
	// BUG 2: printing wrong variable (prints shifted series)
    // FIX : printf("%d\t", a);

        fib(count-2,b,a+b);   
		 // BUG 3: wrong recursion step (skips terms)
        // FIX : fib(count-1, b, a+b);
    }
}

int main() {

    int n=0;
    printf("Enter n: ");
	scanf("%d", n);            
	// BUG 4: missing '&'
    // FIX : scanf("%d", &n);

    if(n <= 0)                  
	printf("Invalid input\n");

    fib(n+1,0,1);              
	// BUG 5: wrong argument (prints extra term)
    // FIX : fib(n, 0, 1);

    return 0;
}

