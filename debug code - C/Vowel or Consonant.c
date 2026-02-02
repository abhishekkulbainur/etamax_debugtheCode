#include <stdio.h>

int main()
{
    char ch;

    scanf("%s", &ch);               
    // BUG 1: wrong format specifier for char
    // FIX : scanf("%c", &ch);

    if(ch = 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    // BUG 2: assignment instead of comparison
    // FIX : if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')

        printf("Consonant\n");      
        // BUG 3: wrong message
        // FIX : printf("Vowel\n");

    else
        printf("Vowel\n");          
        // BUG 4: wrong message
        // FIX : printf("Consonant\n");

    return 1;                      
    // BUG 5: wrong return value
    // FIX : return 0;
}

