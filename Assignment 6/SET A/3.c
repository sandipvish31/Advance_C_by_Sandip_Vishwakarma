#include <stdio.h>

struct Patient {
    int id;
    char name[30];
    int age;
    char disease[30];
};

int main() {
    struct Patient p[50];
    int n, i, searchId;

    printf("Enter number of patients: ");
    scanf("%d", &n);

    for(i=0;i<n;i++) {
        printf("\nPatient %d\n", i+1);
        scanf("%d %s %d %s",
              &p[i].id,p[i].name,&p[i].age,p[i].disease);
    }

    printf("\nEnter ID to search: ");
    scanf("%d",&searchId);

    for(i=0;i<n;i++) {
        if(p[i].id==searchId) {
            printf("Found: %s %d %s\n",
                   p[i].name,p[i].age,p[i].disease);
        }
    }

    printf("\nAll Patients:\n");
    for(i=0;i<n;i++) {
        printf("%d %s %d %s\n",
               p[i].id,p[i].name,p[i].age,p[i].disease);
    }

    return 0;
}