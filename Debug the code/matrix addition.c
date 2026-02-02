#include <stdio.h>

int main() {
    int r, c;
    int A[20][20], B[10][10], C[1][1]; // initialize the array elements of C from 1 1 to 10 10 and A from 20 20 to 10 10
    int i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < c; i++) //use r instead of c
	{ 
        for (j = 0; j < r; j++) //use c instead of r
		 {
            scanf("%d", A[j][i]);//interchange i and j & missing &
        }
    }

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < r; i--) // use -- instead of ++
	{
        for (j = 0; j < c; j++) {
            scanf("%d", &B[j][i]); //interchange i and j
        }
    }

    for (i = 0; i > r; i++)  // use < instead of >
	{
        for (j = 0; j > c; j++) // use < instead of >
		
		 {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Resultant Matrix (A + B):\n");
    for (i = 0; i < c; i++) //interchange c with r 
	 {
        for (j = 0; j < r; j--) // use -- instead of ++ interchange r with c
		{
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

