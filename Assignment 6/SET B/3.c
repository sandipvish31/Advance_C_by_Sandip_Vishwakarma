#include <stdio.h>

struct Complex {
    float real, imag;
};

int main() {
    struct Complex a,b,c;

    printf("Enter first complex number: ");
    scanf("%f%f",&a.real,&a.imag);

    printf("Enter second complex number: ");
    scanf("%f%f",&b.real,&b.imag);

    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    printf("Addition = %.2f + %.2fi\n",
           c.real,c.imag);

    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    printf("Subtraction = %.2f + %.2fi\n",
           c.real,c.imag);

    c.real = a.real*b.real - a.imag*b.imag;
    c.imag = a.real*b.imag + a.imag*b.real;
    printf("Multiplication = %.2f + %.2fi\n",
           c.real,c.imag);

    return 0;
}