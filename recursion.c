#include <stdio.h>

int factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int fibonacci(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int choice, n, i;

    printf("Choose your option\n");
    printf("1 Find Factorial using Recursion\n");
    printf("2 Print Fibonacci Series using Recursion\n");

    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter a number\n");
            scanf("%d", &n);

            printf("Factorial of the given number is %d", factorial(n));
            break;

        case 2:
            printf("Enter number of terms\n");
            scanf("%d", &n);

            printf("Fibonacci series is\n");
            for(i = 0; i < n; i++)
                printf("%d ", fibonacci(i));
            break;

        default:
            printf("Invalid option selected");
    }

    return 0;
}
