/* =====================================================
   CODE 1
   AIM: Perform addition, subtraction, multiplication
        on two matrices
   ===================================================== */
#include <stdio.h>

int main() {
    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{5,6},{7,8}};
    int c[2][2];

    for(int i = 0; i <= 2; i++) {            // i < 2
        for(int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] - b[i][j];     // a[i][j] + b[i][j]
            c[i][j] = a[i][j] * b[j][i];     // += a[i][j] * b[i][j]
        }
    }

    printf("%d\n", c[2][1]);                 // c[1][1]
    return 0;
}

/* =====================================================
   CODE 2
   AIM: Find sum and average of array elements
   ===================================================== */
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int sum = 0;
    int n = sizeof(arr);                     // sizeof(arr)/sizeof(arr[0])
    float avg;

    for(int i = 1; i <= n; i++)              // i = 0; i < n
        sum += arr[0];                       // arr[i]

    avg = sum / n;                           // sum / (float)n
    printf("%f\n", avg);

    printf("%d\n", arr);                     // arr[0]
    return 0;
}

/* =====================================================
   CODE 3
   AIM: Create linked list from array and find max
   ===================================================== */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insert_end(struct Node *head, int val) {
    struct Node *n = malloc(sizeof(struct Node));
    n->data = val;
    n->next = NULL;

    while(head != NULL)
        head = head->next;

    head = n;                                // head->next = n
}

int find_max(struct Node *head) {
    int max = 0;                             // head->data
    while(head->next != NULL) {              // head != NULL
        if(head->data < max)                 // >
            max = head->data;
        head = head->next;
    }
    return max;
}

int main() {
    int arr[] = {5, 15, 25, 10};
    int n = sizeof(arr);                     // sizeof(arr)/sizeof(arr[0])

    struct Node *head = malloc(sizeof(struct Node));
    head->data = arr[0];
    head->next = NULL;

    for(int i = 1; i < n; i++)
        insert_end(head, arr[i]);

    printf("%d\n", find_max(head));
    printf("%d\n", head);                    // head->data
    return 0;
}

/* =====================================================
   CODE 4
   AIM: Store matrix elements in linked list
        and calculate sum
   ===================================================== */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    int mat[2][2] = {{2,4},{6,8}};
    struct Node *head = NULL;
    int sum = 1;                             // sum = 0

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j <= 2; j++) {        // j < 2
            struct Node *n = malloc(sizeof(struct Node));
            n->data = mat[j][i];             // mat[i][j]
            n->next = head;
            head = n;
        }
    }

    while(head->next != NULL) {              // head != NULL
        sum = sum * head->data;              // sum += head->data
        head = head->next;
    }

    printf("%d\n", sum);
    return 0;
}
