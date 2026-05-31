#include <stdio.h>

struct Student {
    int roll;
    char name[30];
};

int main() {
    struct Student s1 = {1, "Rahul"};
    struct Student s2;

    struct Student *p1 = &s1;
    struct Student *p2 = &s2;

    *p2 = *p1;

    printf("Roll = %d\n", s2.roll);
    printf("Name = %s\n", s2.name);

    return 0;
}