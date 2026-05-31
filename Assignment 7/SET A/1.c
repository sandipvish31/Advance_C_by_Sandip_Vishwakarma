#include <stdio.h>

struct Room {
    int roomNo;
    char type[20];
};

struct Booking {
    char name[50];
    char phone[15];
    struct Room room;
};

int main() {
    int n, i;

    printf("Enter number of bookings: ");
    scanf("%d", &n);

    struct Booking b[n];

    for(i = 0; i < n; i++) {
        printf("\nBooking %d\n", i + 1);

        printf("Customer Name: ");
        scanf("%s", b[i].name);

        printf("Phone Number: ");
        scanf("%s", b[i].phone);

        printf("Room Number: ");
        scanf("%d", &b[i].room.roomNo);

        printf("Room Type: ");
        scanf("%s", b[i].room.type);
    }

    printf("\nBooking Details:\n");
    for(i = 0; i < n; i++) {
        printf("\nCustomer Name: %s", b[i].name);
        printf("\nPhone: %s", b[i].phone);
        printf("\nRoom No: %d", b[i].room.roomNo);
        printf("\nRoom Type: %s\n", b[i].room.type);
    }

    return 0;
}