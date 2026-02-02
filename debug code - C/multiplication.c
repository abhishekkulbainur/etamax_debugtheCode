#include <stdio.h>

int main()
{
    int number;             
    int i;

    printf("Enter number: ");

    scanf("%f", &number);       
    // BUG 1: wrong format specifier for int
    // FIX : scanf("%d", &number);

    for(i = 1; i < 10; i++)     
    // BUG 2: prints only 9 lines (should print 10)
    // FIX : for(i = 1; i <= 10; i++)

    {
        printf("%d x %d = %d\n", number, i, number + i);  
        // BUG 3: addition instead of multiplication
        // FIX : number * i
    }

    if(number = 0)              
    // BUG 4: assignment instead of comparison
    // FIX : if(number == 0)

        printf("Zero table\n");

    return 1;                   
    // BUG 5: wrong return value
    // FIX : return 0;
}

