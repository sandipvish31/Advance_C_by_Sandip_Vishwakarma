#include <stdio.h>

int main() {
    int arr[100], n, temp;
    int *p1, *p2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            p1 = &arr[i];
            p2 = &arr[j];

            if(*p1 > *p2) {
                temp = *p1;
                *p1 = *p2;
                *p2 = temp;
            }
        }
    }

    printf("Ascending Order:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}