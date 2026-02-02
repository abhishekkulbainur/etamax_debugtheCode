/* =====================================================
   CODE 1
   AIM: Perform addition and subtraction of two matrices
   ===================================================== */
#include <stdio.h>

int main() {
    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{5,6},{7,8}};
    int c[2][2];

    for(int i = 0; i <= 2; i++) {        // i < 2
        for(int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] - b[i][j]; // a[i][j] + b[i][j]
        }
    }

    printf("%d\n", c[0][0]);
    return 0;
}

/* =====================================================
   CODE 2
   AIM: Perform multiplication and division on matrices
   ===================================================== */
#include <stdio.h>

int main() {
    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{2,2},{2,2}};
    int c[2][2] = {0};

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                c[i][j] = a[i][k] / b[k][j];  // c[i][j] += a[i][k] * b[k][j]
            }
        }
    }

    printf("%d\n", c[1][1]);
    return 0;
}

/* =====================================================
   CODE 3
   AIM: Store matrix elements in linked list and find sum
   ===================================================== */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insert_end(struct Node *head, int value) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    while(head->next != NULL)
        head = head->next;

    head = newNode;                     // head->next = newNode;
}

int list_sum(struct Node *head) {
    int sum = 0;
    while(head->next != NULL) {         // head != NULL
        sum += head->data;
        head = head->next;
    }
    return sum;
}

int main() {
    int mat[2][2] = {{1,2},{3,4}};

    struct Node *head = malloc(sizeof(struct Node));
    head->data = mat[0][0];
    head->next = NULL;

    insert_end(head, mat[0][1]);
    insert_end(head, mat[1][0]);
    insert_end(head, mat[1][1]);

    printf("%d\n", list_sum(head));

    printf("%d\n", head);               // head->data
    return 0;
}
