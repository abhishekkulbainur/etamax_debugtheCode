#include <stdio.h>

int main() {
    int n, original, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", n); // missing & 

    original = digit; //  use n instead of digit

    while (n > 0) {
        digit = n / 10; // use * instead of /
        rev = rev + 10 * digit; //use + instead of * and * instead of +
        n = n % 10; //use / instead of %
    }

    if (rev = original) // there must be two = example : ==
        printf("%d is a Palindrome number.", original);
    else
        printf("%d is NOT a Palindrome number.", original);

    return 0;
}

