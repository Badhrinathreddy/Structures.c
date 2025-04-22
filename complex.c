#include <stdio.h>

struct Complex 
{
    float real;
    float imag;
};
struct Complex add(struct Complex a, struct Complex b) 
{
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}
int main() 
{
    struct Complex c1, c2, sum;
    printf("Enter real and imaginary part of first complex number:\n");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter real and imaginary part of second complex number:\n");
    scanf("%f %f", &c2.real, &c2.imag);
    sum = add(c1, c2);
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);
    return 0;
}
