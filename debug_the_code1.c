/* =====================================================
   File Name : debug_the_code.c
   Event     : Debug The Code
   Level     : Confusing + Time Wasting
   ===================================================== */

/* -------------------------------------------------- */
/* AIM: Print sum of numbers from 1 to 10 */
#include <stdio.h>
/*
int main() {
    int i, sum = 1;          // sum = 0
    for(i = 1; i < 10; i++)  // i <= 10
        sum = sum + 1;       // sum = sum + i
    printf("%d", i);         // printf("%d", sum)
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Print factorial of 5 */
#include <stdio.h>
/*
int main() {
    int i, fact = 0;         // fact = 1
    for(i = 1; i <= 5; i++)
        fact = fact + i;     // fact = fact * i
    printf("%d", i);         // printf("%d", fact)
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Check whether number is even */
#include <stdio.h>
/*
int main() {
    int n = 8;
    if(n % 2 == 1)           // n % 2 == 0
        printf("Even");
    else
        printf("Odd");
    printf("Done");          // remove / wrong placement
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Print largest of three numbers */
#include <stdio.h>
/*
int main() {
    int a = 10, b = 20, c = 15;
    if(a > b && a > c)
        printf("%d", b);     // printf("%d", a)
    else if(b > a && b > c)
        printf("%d", c);     // printf("%d", b)
    else
        printf("%d", a);     // printf("%d", c)
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Count number of digits in a number */
#include <stdio.h>
/*
int main() {
    int n = 1234, count = 1;     // count = 0
    while(n > 0) {
        n = n / 100;             // n = n / 10
        count = count + 2;       // count++
    }
    printf("%d", n);             // printf("%d", count)
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Print numbers from 1 to 5 */
#include <stdio.h>
/*
int main() {
    int i = 1;
    while(i <= 5);               // remove semicolon
    {
        printf("%d ", i);
        i = i + 2;               // i++
    }
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Check whether number is prime */
#include <stdio.h>
/*
int main() {
    int n = 9, i, flag = 1;
    for(i = 2; i <= n; i++) {    // i < n
        if(n % i == 0)
            flag = 1;            // flag = 0
    }
    if(flag == 1)
        printf("Prime");         // printf("Not Prime")
    else
        printf("Not Prime");
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Reverse a number */
#include <stdio.h>
/*
int main() {
    int n = 123, rev = 0;
    while(n > 0) {
        rev = n % 10;            // rev = rev * 10 + n % 10
        n = n / 10;
    }
    printf("%d", n);             // printf("%d", rev)
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Print sum of array elements */
#include <stdio.h>
/*
int main() {
    int arr[] = {1,2,3,4};
    int i, sum = 0;
    for(i = 0; i <= 4; i++)      // i < 4
        sum += arr[1];           // sum += arr[i]
    printf("%d", i);             // printf("%d", sum)
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Modify value using pointer */
#include <stdio.h>
/*
int main() {
    int x = 10;
    int *p;
    p = x;                       // p = &x
    *p = 20;
    printf("%d", p);             // printf("%d", x)
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Print square of (3 + 1) using macro */
#include <stdio.h>
/*
#define SQR(x) x*x               // (x)*(x)
int main() {
    int a = SQR(3 + 1);
    printf("%d", a);
    return 1;                    // return 0
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Print sum using recursion */
#include <stdio.h>
/*
int sum(int n) {
    if(n == 0)
        return 1;                // return 0
    return n + sum(n);           // sum(n - 1)
}

int main() {
    printf("%d", sum(5));
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Access structure member using pointer */
#include <stdio.h>
/*
struct Student {
    int roll;
};

int main() {
    struct Student s = {101};
    struct Student *p;
    p->roll = s.roll;            // p = &s
    printf("%d", s);             // printf("%d", p->roll)
    return 0;
}
*/
/* -------------------------------------------------- */


/* =====================================================
   END OF FILE : debug_the_code.c
   ===================================================== */
