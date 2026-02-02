#include <stdio.h>

int main()
{
    int choice = 1;
    float num1, num2, result = 1;     
    // BUG 1: result initialized to 1 (wrong default)
    // FIX : float result = 0;

    while(choice != 5)
    {
        printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\n");

        scanf("%f", &choice);        
        // BUG 2: wrong format specifier for int
        // FIX : scanf("%d", &choice);

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch(choice)
        {
            case 1:
                result = num1 - num2;   
                // BUG 3: subtraction instead of addition
                // FIX : result = num1 + num2;
                break;

            case 2:
                result = num1 + num2;   
                // BUG 4: addition instead of subtraction
                // FIX : result = num1 - num2;
                break;

            case 3:
                result = num1 * num1;   
                // BUG 5: multiplying same number
                // FIX : result = num1 * num2;
                break;

            case 4:
                result = num1 / (num2);  
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Wrong choice\n");
        }

        printf("Result = %f\n", result);  
    }

    if(choice = 5)  
    // BUG 6: assignment instead of comparison
    // FIX : if(choice == 5)

        printf("Calculator closed\n");

    return 1;      
    // BUG 7: wrong return value for success
    // FIX : return 0;
}

