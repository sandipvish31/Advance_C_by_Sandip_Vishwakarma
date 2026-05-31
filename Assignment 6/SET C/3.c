#include <stdio.h>

struct Product {
    int id;
    char name[30];
    int qty;
    float price;
};

int main() {
    struct Product p[50], temp;
    int n,i,j;
    float totalValue=0;

    printf("Enter number of products: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        scanf("%d%s%d%f",
              &p[i].id,p[i].name,
              &p[i].qty,&p[i].price);

        totalValue += p[i].qty * p[i].price;
    }

    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(p[i].price > p[j].price) {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }

    printf("\nTotal Inventory Value = %.2f\n",
           totalValue);

    printf("\nProducts Sorted By Price:\n");
    for(i=0;i<n;i++) {
        printf("%d %s %d %.2f\n",
               p[i].id,p[i].name,
               p[i].qty,p[i].price);
    }

    return 0;
}