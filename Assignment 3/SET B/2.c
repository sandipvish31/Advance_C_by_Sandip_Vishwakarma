#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j;
    int **mat, max, min;

    printf("Enter rows and columns: ");
    scanf("%d%d", &m, &n);

    mat = (int **)malloc(m * sizeof(int *));

    for(i = 0; i < m; i++)
        mat[i] = (int *)malloc(n * sizeof(int));

    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    max = min = mat[0][0];

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(mat[i][j] > max)
                max = mat[i][j];

            if(mat[i][j] < min)
                min = mat[i][j];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    for(i = 0; i < m; i++)
        free(mat[i]);
    free(mat);

    return 0;
}