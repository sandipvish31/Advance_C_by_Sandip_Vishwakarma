#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    int m1, m2, m3;
    int total;
    char grade;
};

void calculate(struct Student *s) {
    s->total = s->m1 + s->m2 + s->m3;

    if(s->total >= 240)
        s->grade = 'A';
    else if(s->total >= 180)
        s->grade = 'B';
    else if(s->total >= 120)
        s->grade = 'C';
    else
        s->grade = 'D';
}

void display(struct Student s) {
    printf("\nRoll=%d Name=%s Total=%d Grade=%c",
           s.roll, s.name, s.total, s.grade);
}

int main() {
    struct Student s;

    printf("Enter Roll, Name and 3 Marks: ");
    scanf("%d %s %d %d %d",
          &s.roll, s.name, &s.m1, &s.m2, &s.m3);

    calculate(&s);
    display(s);

    return 0;
}