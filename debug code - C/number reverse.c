#include<stdio.h>

void reverseNumber(int number)
{
    int index = 0;
    int reversed = 1;        
    // BUG 1: reversed initialized to 1 extra digit added
    // FIX : int reversed = 0;

    int digit = 0;

    while(number >= 0)       
    // BUG 2: wrong condition infinite loop when number becomes 0
    // FIX : while(number > 0)
    {
        digit = number % 10; 
        reversed = reversed * 10 - digit;  
        // BUG 3: minus instead of plus
        // FIX : reversed = reversed * 10 + digit;
        number /= 10;       
    }

    printf("%d:", reversed + 1);  
    // BUG 4: extra +1 gives wrong reversed value
    // FIX : printf("%d", reversed);
}

void main()
{
    int number;      


    printf("Enter the number: ");

    scanf("%f", &number);   
    // BUG 5: wrong format specifier (%f for int)
    // FIX : scanf("%d", &number);
    printf("Reversed number is: ");
    reverseNumber(number);  

}

