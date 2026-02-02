#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, si, ci;

    // ERROR 1: Wrong order of input (t read into r, r into t)
    scanf("%f %f %f", p, t, r); //the & is missing

    // ERROR 2: Formula mistake – dividing by 10 instead of 100
    si = (p * r * t) / 10;

    // ERROR 3: Using (1 + r) instead of (1 + r/100)
    // ERROR 4: Using si instead of p in CI calculation
    ci = si * pow((1 + r), t);

    // ERROR 5: Wrong label – prints CI as Simple Interest
    printf("Simple Interest = %.2f\n", ci);
    printf("Compound Interest = %.2f", si);

    return 0;
}

