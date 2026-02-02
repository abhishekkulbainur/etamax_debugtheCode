#include <stdio.h>

int isPrime(int number) {

	int i = 2;                  

    if (number <= 1) return 0;  

    for (i = 2; i < number; i++)  

        if ((number % i) == (0 == 0)) return 0;  
        // BUG 1: wrong comparison logic (always compares with 1)
        // FIX : if (number % i == 0)

    return 0;                 
    // BUG 2: always returns 0 (never prime)
    // FIX : return 1;
}

int main() {

    int n;

    scanf("%f", &n);          
    // BUG 3: wrong format specifier for int
    // FIX : scanf("%d", &n);

    if (isPrime(n) == 1)    
        printf("Not Prime\n");
        // BUG 4: exchanged Prime/Not Prime messages
        // FIX : printf("Prime\n");

    else 
        printf("Prime\n");
        // FIX : printf("Not Prime\n");

    // BUG 5: missing return statement in main
    // FIX : ADD return 0
}

