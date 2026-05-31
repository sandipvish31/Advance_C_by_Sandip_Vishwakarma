#include <stdio.h>
#include <string.h>

struct Department {
    int deptId;
    char deptName[30];
};

struct Employee {
    char name[50];
    int age;
    struct Department dept;
};

int main() {
    struct Employee emp[50];
    int n, i, choice;
    char searchDept[30];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Age: ");
        scanf("%d", &emp[i].age);

        printf("Department ID: ");
        scanf("%d", &emp[i].dept.deptId);

        printf("Department Name: ");
        scanf("%s", emp[i].dept.deptName);
    }

    do {
        printf("\nMenu");
        printf("\n1. Employees between age 30-40");
        printf("\n2. Department Employee List");
        printf("\n3. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEmployees Age 30-40:\n");
                for(i = 0; i < n; i++) {
                    if(emp[i].age >= 30 && emp[i].age <= 40)
                        printf("%s\n", emp[i].name);
                }
                break;

            case 2:
                printf("Enter Department Name: ");
                scanf("%s", searchDept);

                printf("\nEmployee List:\n");
                for(i = 0; i < n; i++) {
                    if(strcmp(emp[i].dept.deptName, searchDept) == 0)
                        printf("%s\n", emp[i].name);
                }
                break;

            case 3:
                printf("Exit\n");
                break;

            default:
                printf("Invalid Choice\n");
        }
    } while(choice != 3);

    return 0;
}