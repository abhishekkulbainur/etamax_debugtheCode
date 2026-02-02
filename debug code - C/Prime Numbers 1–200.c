#include <stdio.h>

int main()
{
    int i, j, flag;

    for(i = 1; i <= 200; i++)
    {
        flag == 1;
		//comparison instead of assignment 
            // FIX : if(falg = 1)
        for(j = 2; j <= i; j++)     
        // BUG 1: wrong bound (always divisible by itself)
        // FIX : j < i
        {
            if(i % j = 0)           
            // BUG 2: assignment instead of comparison
            // FIX : if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag = 1)               
        // BUG 3:  assignment instead of comparison
            // FIX : if(flag == 1)
            printf("%d ", i);
    }

    return 1;                       
    // BUG 4: wrong return value
    // FIX : return 0;
}

