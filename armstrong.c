#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digit, sum = 1, count = 1; // error : sum and count initialize to 0

    printf("Enter a number: ");
    scanf("%d", n); // missing &

    temp = n;

    // Count number of digits
    while (temp > 1) // error:use 0 instead of 1
	{
        count--;    // error: use ++ instead of --
        temp = temp / 100; // error: use 10 instead of 100
    }

    temp = n;  // reset temp

    // Calculate Armstrong sum
    while (n > 0) //error: use temp instead of n
	{
        digit = temp / 10;  // error: use % instead of /
        sum = sum + pow(digit, count);
        temp = temp/100;  // divide temp by 10
    }

    if (sum == digit) //error: use n example:(sum == n)
        printf("%d is an Armstrong Number.", n);
    else
        printf("%d is NOT an Armstrong Number.", n);

    return 0;
}

