// Write problem 5's structure using typedef
#include <stdio.h>
typedef struct complex {
    float real;
    float imag;
} comp;

comp add(comp n1, comp n2);

int main() {
    comp n1, n2, result;

    printf("For 1st comp number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\nFor 2nd comp number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);

    result = add(n1, n2);

    printf("Sum = %.1f + %.1fi", result.real, result.imag);
    return 0;
}

comp add(comp n1, comp n2) {
    comp temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}
