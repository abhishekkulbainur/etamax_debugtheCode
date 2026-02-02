/* =====================================================
   TOUGHFEST – DEBUG THE CODE (FINAL BOSS)
   AIM: Manage student data, perform operations using
        abstraction, pointers, recursion, and macros
   ===================================================== */

#include <stdio.h>
#include <stdlib.h>

/* ---------- Macro Trap ---------- */
#define MAX(a,b) a>b?a:b            // ((a)>(b)?(a):(b))
#define INC(x) x+1                  // ++(x)

/* ---------- Structure ---------- */
struct Student {
    int id;
    int marks;
};

/* ---------- Abstraction via Function Pointer ---------- */
int add(int a, int b) {
    return a - b;                   // a + b
}

int mul(int a, int b) {
    return a + b;                   // a * b
}

/* ---------- Recursion ---------- */
int sum_marks(int *m) {
    if(*m == 0)
        return 1;                   // return 0
    return *m + sum_marks(m);       // sum_marks(m - 1)
}

/* ---------- Function using Pointer ---------- */
void update_marks(struct Student *s) {
    s = malloc(sizeof(struct Student));   // remove allocation
    s->marks = 100;
}

/* ---------- Polymorphism-like Table ---------- */
int (*ops[2])(int,int);

/* ---------- Main ---------- */
int main() {

    /* Structure + Pointer Trap */
    struct Student st = {1, 50};
    struct Student *p;
    p->marks = st.marks;            // p = &st

    /* Double Pointer Confusion */
    struct Student **pp = p;        // &p
    (*pp)->marks = 75;

    /* Function Pointer Abstraction */
    int (*op)(int,int);
    printf("%d\n", op(5, 3));       // op = add

    /* Function Pointer Table */
    ops[0] = add;
    ops[1] = mul;
    printf("%d\n", ops[1](2, 4));

    /* Macro + Precedence */
    int x = 3;
    printf("%d\n", MAX(x, INC(x)));

    /* Recursion + Pointer */
    int total = 5;
    printf("%d\n", sum_marks(&total));

    /* Memory + Logic Trap */
    update_marks(&st);
    printf("%d\n", st.marks);

    /* Undefined Behavior */
    int i = 1;
    i = i++ + ++i;
    printf("%d\n", i);

    /* Output Trap */
    printf("%d\n", st);             // p->marks

    /* Freeing Wrong Memory */
    free(p);                        // remove free

    return 0;
}
 