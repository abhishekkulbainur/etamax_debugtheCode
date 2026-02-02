#include <stdio.h>

int main()
{
    float num;              
	printf("Enter a number:");
    scanf("%d", &num);          
    // BUG 1: wrong format specifier for float
    // FIX : scanf("%f", &num);

    if(num = 0)   
	{
				              
    // BUG 2: assignment instead of comparison
    // FIX : if(num == 0)
        printf("Zero\n");
}
    else if(num > 0){

        printf("Negative\n");   
        // BUG 3: wrong message printed
        // FIX : printf("Positive\n");
}
    else if(num < 0)          {
        printf("Positive\n");   
        // BUG 4: wrong message printed
        // FIX : printf("Negative\n");
    }
    return 1;                   
    // BUG 5: wrong return value
    // FIX : return 0;
}

