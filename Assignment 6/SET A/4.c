#include <stdio.h>

struct Date {
    int day, month, year;
};

int daysInYear(int year) {
    if((year%400==0)||((year%4==0)&&(year%100!=0)))
        return 366;
    return 365;
}

int main() {
    struct Date d1,d2;

    printf("Enter First Date (dd mm yyyy): ");
    scanf("%d%d%d",&d1.day,&d1.month,&d1.year);

    printf("Enter Second Date (dd mm yyyy): ");
    scanf("%d%d%d",&d2.day,&d2.month,&d2.year);

    printf("Days in %d = %d\n",
           d1.year, daysInYear(d1.year));

    int diff = (d2.year-d1.year)*365 +
               (d2.month-d1.month)*30 +
               (d2.day-d1.day);

    printf("Difference = %d days\n", diff);

    return 0;
}