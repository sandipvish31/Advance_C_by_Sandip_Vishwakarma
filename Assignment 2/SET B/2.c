#include <stdio.h>

int main() {
    int arr[100], n;
    int *ptr;
    int max, min;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr;
    max = min = *ptr;

    for(int i = 1; i < n; i++) {
        ptr = arr + i;

        if(*ptr > max)
            max = *ptr;

        if(*ptr < min)
            min = *ptr;
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}