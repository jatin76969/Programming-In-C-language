#include <stdio.h>

int main()
{
    int a = 10, b = 5;
printf("a = 10, b = 5\n");
    printf("\nArithmetic Operators\n");
    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);
    printf("Quotient = %d\n", a / b);

    printf("\nRelational Operators\n");
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a == b = %d\n", a == b);

    printf("\nLogical Operators\n");
    printf("(a>b && b>0) = %d\n", (a > b && b > 0));
    printf("(a<b || b>0) = %d\n", (a < b || b > 0));
    printf("(a!=b) = %d\n", (a != b));

    printf("\nConditional Operator\n");
    printf("Greater number = %d\n", (a > b) ? a : b);

    return 0;
}
