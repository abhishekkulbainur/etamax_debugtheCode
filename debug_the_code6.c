/* =====================================================
   DEBUG THE CODE – BASIC BUT TOUGH
   AIM: Perform matrix operations, array processing,
        and linked list operations
   ===================================================== */

#include <stdio.h>
#include <stdlib.h>

/* ---------- Linked List Structure ---------- */
struct Node {
    int data;
    struct Node *next;
};

/* ---------- Linked List Insert at End ---------- */
void insert_end(struct Node *head, int val) {
    struct Node *n = malloc(sizeof(struct Node));
    n->data = val;
    n->next = NULL;

    while(head != NULL)
        head = head->next;

    head = n;                    // head->next = n;
}

/* ---------- Main ---------- */
int main() {

    /* ---------- Matrix Addition ---------- */
    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{5,6},{7,8}};
    int c[2][2];

    for(int i = 0; i <= 2; i++) {        // i < 2
        for(int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] - b[i][j]; // a[i][j] + b[i][j]
        }
    }

    printf("%d\n", c[2][1]);             // c[1][1]

    /* ---------- Array Sum ---------- */
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr);                 // sizeof(arr)/sizeof(arr[0])
    int sum = 0;

    for(int i = 1; i <= n; i++)          // i = 0; i < n
        sum += arr[0];                   // arr[i]

    printf("%d\n", sum);

    /* ---------- Pointer Arithmetic ---------- */
    int *p = arr;
    printf("%d\n", *p + 2);              // *(p + 2)

    /* ---------- Linked List Creation ---------- */
    struct Node *head = malloc(sizeof(struct Node));
    head->data = arr[0];
    head->next = NULL;

    insert_end(head, arr[1]);
    insert_end(head, arr[2]);
    insert_end(head, arr[3]);

    /* ---------- Linked List Traversal ---------- */
    int listSum = 0;
    struct Node *temp = head;
    while(temp->next != NULL) {          // temp != NULL
        listSum = listSum * temp->data;  // +=
        temp = temp->next;
    }

    printf("%d\n", listSum);

    /* ---------- Output Mistakes ---------- */
    printf("%d\n", arr);                 // arr[0]
    printf("%d\n", head);                // head->data

    return 0;
}
