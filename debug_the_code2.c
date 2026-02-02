/* =====================================================
   File Name : debug_the_code.c
   Level     : ADVANCED / FINAL ROUND
   ===================================================== */

/* -------------------------------------------------- */
/* AIM: Print sum of numbers from 1 to n using recursion */
#include <stdio.h>
/*
int sum(int n) {
    if(n == 1)
        return 0;            // return 1
    return n + sum(n);       // sum(n - 1)
}

int main() {
    printf("%d", sum(5));
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Swap two numbers using pointers */
#include <stdio.h>
/*
void swap(int *a, int *b) {
    int *temp;               // int temp
    *temp = *a;
    *a = *b;
    *b = *temp;
}

int main() {
    int x = 10, y = 20;
    swap(x, y);              // swap(&x, &y)
    printf("%d %d", x, y);
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Count number of elements in array */
#include <stdio.h>
/*
int count(int arr[]) {
    return sizeof(arr);      // sizeof(arr)/sizeof(arr[0])
}

int main() {
    int arr[] = {1,2,3,4,5};
    printf("%d", count(arr));
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Print second largest element in array */
#include <stdio.h>
/*
int main() {
    int arr[] = {5, 10, 20, 15};
    int max = arr[0], smax = arr[0];
    for(int i = 0; i < 4; i++) {
        if(arr[i] > max) {
            max = arr[i];
            smax = arr[i];     // smax = max (before update)
        }
    }
    printf("%d", smax);
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Demonstrate abstraction using function pointer */
#include <stdio.h>
/*
int add(int a, int b) {
    return a - b;            // a + b
}

int sub(int a, int b) {
    return a + b;            // a - b
}

int main() {
    int (*op)(int,int);
    op = add;
    printf("%d", op(10,5));
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Print factorial using recursion */
#include <stdio.h>
/*
int fact(int n) {
    if(n == 0)
        return 0;            // return 1
    return n * fact(n);      // fact(n - 1)
}

int main() {
    printf("%d", fact(5));
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Print elements of array using pointer */
#include <stdio.h>
/*
int main() {
    int arr[] = {10,20,30};
    int *p = arr;
    for(int i = 0; i < 3; i++) {
        printf("%d ", *p);   // *(p + i)
        p++;
    }
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Correctly use structure pointer */
#include <stdio.h>
/*
struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s = {1, 85.5};
    struct Student *p;
    p->roll = s.roll;        // p = &s
    p->marks = s.marks;
    printf("%d %.1f", p->roll, p->marks);
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Use macro to calculate square safely */
#include <stdio.h>
/*
#define SQR(x) x*x           // (x)*(x)

int main() {
    int a = SQR(2+3);
    printf("%d", a);
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Check whether number is prime */
#include <stdio.h>
/*
int main() {
    int n = 11, i, flag = 1;
    for(i = 2; i <= n/2; i++) {
        if(n % i == 0)
            flag = 1;        // flag = 0
    }
    if(flag)
        printf("Prime");     // printf("Not Prime")
    else
        printf("Not Prime");
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Modify value using double pointer */
#include <stdio.h>
/*
int main() {
    int x = 10;
    int *p = &x;
    int **pp = p;            // &p
    **pp = 50;
    printf("%d", x);
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Prevent infinite loop */
#include <stdio.h>
/*
int main() {
    int i = 1;
    while(i <= 5) {
        printf("%d ", i);
        i = i - 1;           // i++
    }
    return 0;
}
*/
/* -------------------------------------------------- */


/* -------------------------------------------------- */
/* AIM: Print correct output using conditional operator */
#include <stdio.h>
/*
int main() {
    int a = 5, b = 10;
    int max = (a > b) ? a : a;   // (a > b) ? a : b
    printf("%d", max);
    return 0;
}
*/
/* -------------------------------------------------- */


/* =====================================================
   END OF FILE
   ===================================================== */
