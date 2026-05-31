#include <stdio.h>

struct Account {
    int accNo;
    char name[30];
    float balance;
};

int main() {
    struct Account a;
    float amt;

    printf("Enter Account No Name Balance: ");
    scanf("%d%s%f",
          &a.accNo,a.name,&a.balance);

    printf("Enter Deposit Amount: ");
    scanf("%f",&amt);
    a.balance += amt;

    printf("Enter Withdraw Amount: ");
    scanf("%f",&amt);

    if(amt<=a.balance)
        a.balance -= amt;

    printf("\nAccount Details\n");
    printf("%d %s %.2f\n",
           a.accNo,a.name,a.balance);

    return 0;
}