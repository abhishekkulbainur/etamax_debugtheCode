#include <stdio.h>

int main()
{
    int year = 0;

    scanf("%f", &year);             
    // BUG 1: wrong format specifier
    // FIX : scanf("%d", &year);

    if(year % 4 = 0)                
    // BUG 2: assignment instead of comparison
    // FIX : year % 4 == 0

        if(year % 100 != 0 || year % 400 == 0)
            printf("Not Leap Year\n");  
            // BUG 3: wrong message
            // FIX : printf("Leap Year\n");

    else
        printf("Leap Year\n");       
        // BUG 4: wrong message
        // FIX : printf("Not Leap Year\n");

    return 1;                       
    // BUG 5: wrong return
}

