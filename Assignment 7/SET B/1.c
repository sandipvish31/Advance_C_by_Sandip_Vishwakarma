#include <stdio.h>

struct Subject {
    char name[30];
    char grade;
};

struct Student {
    char name[50];
    int age;
    struct Subject sub[5];
};

int main() {
    struct Student s;
    int i;

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Age: ");
    scanf("%d", &s.age);

    for(i = 0; i < 5; i++) {
        printf("\nSubject %d Name: ", i + 1);
        scanf("%s", s.sub[i].name);

        printf("Grade: ");
        scanf(" %c", &s.sub[i].grade);
    }

    printf("\nStudent Details\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);

    printf("\nSubjects and Grades:\n");
    for(i = 0; i < 5; i++) {
        printf("%s : %c\n", s.sub[i].name, s.sub[i].grade);
    }

    return 0;
}