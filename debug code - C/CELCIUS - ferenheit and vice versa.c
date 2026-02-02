#include <stdio.h>

int main()
{
    int choice = 0;
    float temp, result = 0;      

    printf("1. F to C\n2. C to F\n");
    scanf("%f", &choice);        
    // BUG 1: wrong format specifier for int
    // FIX : scanf("%d", &choice);

    printf("Enter temperature: ");
    scanf("%d", &temp);          
    // BUG 2: wrong format specifier for float
    // FIX : scanf("%f", &temp);

    if(choice = 1)               
    // BUG 3: assignment instead of comparison
    // FIX : if(choice == 1)
    {
        result = (temp - 32) * 5/9;   

        printf("Celsius = %f\n", result+1);
        // BUG 4: extra +1 gives wrong result
        // FIX : printf("Celsius = %f\n", result);
    }

    else if(choice == 2)
    {
        result = temp * 9/5 + 32;    

        printf("Fahrenheit = %f\n", result);
    }

    return 1;                     
    // BUG 5: wrong return value
    // FIX : return 0;
}

