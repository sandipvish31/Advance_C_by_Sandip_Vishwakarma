#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float sum = 0, avg;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)calloc(n, sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Average = %.2f\n", avg);

    free(arr);
    return 0;
}