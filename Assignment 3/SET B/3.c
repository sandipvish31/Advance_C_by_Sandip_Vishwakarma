#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j;
    int **A, **B, **C;

    printf("Enter rows and columns: ");
    scanf("%d%d", &m, &n);

    A = (int **)malloc(m * sizeof(int *));
    B = (int **)malloc(m * sizeof(int *));
    C = (int **)malloc(m * sizeof(int *));

    for(i = 0; i < m; i++) {
        A[i] = (int *)malloc(n * sizeof(int));
        B[i] = (int *)malloc(n * sizeof(int));
        C[i] = (int *)malloc(n * sizeof(int));
    }

    printf("Enter first matrix:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter second matrix:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("Addition Matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    for(i = 0; i < m; i++) {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }

    free(A);
    free(B);
    free(C);

    return 0;
}