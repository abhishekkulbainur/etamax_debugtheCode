#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter size: ");
    scanf("%d", n);
    //BUG : NO &
    //FIX : Add &

    int arr[5];                 
    // BUG 1: fixed small size overflow if n > 5
    // FIX : int arr[100];  OR  int arr[n];

    printf("Enter elements:\n");

    for(i = 0; i <n; i++)     
        scanf("%d", &arr[i]);

    int largest = arr[0];
	int second = arr[0];

    for(i = 0; i < n; i--)
            // BUG : wrong updation
        // FIX : i++ instead of i--
    {
        if(arr[i] < largest)       
        // BUG 2: wrong comparison sign
        // FIX : if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }

        else if(arr[i] > second && arr[i] < largest)  
        {
            second = arr[i];
        }
    }

    printf("Second largest = %d", second + 1);  
    // BUG 3: extra +1 gives wrong output
    // FIX : printf("Second largest = %d", second);

    if(n = 1)                   
    // BUG 4: assignment instead of comparison
    // FIX : if(n == 1)
        printf("\nNot enough elements");

    return 1;                   
    // BUG 5: wrong return value
    // FIX : return 0;
}

