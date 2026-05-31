#include <stdio.h>

union Transaction {
    struct {
        int id;
        float amount;
    } deposit;

    struct {
        int id;
        float amount;
    } withdrawal;
};

int main() {
    union Transaction t[10];
    int n, i, choice;

    printf("Enter number of transactions: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\n1.Deposit  2.Withdrawal\n");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Transaction ID: ");
            scanf("%d", &t[i].deposit.id);

            printf("Amount: ");
            scanf("%f", &t[i].deposit.amount);

            printf("Deposit -> ID=%d Amount=%.2f\n",
                   t[i].deposit.id,
                   t[i].deposit.amount);
        }
        else {
            printf("Transaction ID: ");
            scanf("%d", &t[i].withdrawal.id);

            printf("Amount: ");
            scanf("%f", &t[i].withdrawal.amount);

            printf("Withdrawal -> ID=%d Amount=%.2f\n",
                   t[i].withdrawal.id,
                   t[i].withdrawal.amount);
        }
    }

    return 0;
}