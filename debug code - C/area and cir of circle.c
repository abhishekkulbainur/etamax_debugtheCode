#include <stdio.h>

int main()
{
    int radius;                 
    float area = 1, circumference;

    scanf("%f", &radius);       
    // BUG 1: wrong format specifier for int
    // FIX : scanf("%d", &radius);

    float pi = 3.14;               


    area = 2 * pi * radius;     
    // BUG 2: wrong formula (this is circumference)
    // FIX : area = pi * radius * radius;

    circumference = pi * radius * radius;  
    // BUG 3: wrong formula (this is area)
    // FIX : circumference = 2 * pi * radius;

    if(radius = 0)              
    // BUG 4: assignment instead of comparison
    // FIX : if(radius == 0)
        printf("Invalid radius\n");

    printf("Area = %f\n", area);  

    printf("Circumference = %f\n", circumference);

    return 1;                   
    // BUG 5: wrong return value
    // FIX : return 0;
}

