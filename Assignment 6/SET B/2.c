#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee e[50];
    int n,i;
    float sum=0;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        scanf("%d%s%f",
              &e[i].id,e[i].name,&e[i].salary);

        sum += e[i].salary;
    }

    printf("\nAverage Salary = %.2f",
           sum/n);

    return 0;
}