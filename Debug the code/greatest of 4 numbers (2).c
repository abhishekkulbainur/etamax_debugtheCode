#include <stdio.h>

int main() {
    int a, b, c, d, max;

    // ERROR 1: max is NOT initialized
    printf("Enter 4 numbers="); 
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // ERROR 2: Using < instead of >
    if (b < max)
        max = b;

    // ERROR 3: Comparing c with a instead of max
    if (c < a)
        max = c;

    // ERROR 4: Assigning d to max without comparison
    max = d;

    // ERROR 5: Message says Largest but logic gives random/smallest value
    printf("Largest number = %d" ,max); 

    return 0;
}

