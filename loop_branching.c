#include <stdio.h>
#include <math.h>

int main()
{
    int choice;

    printf("Choose your option\n");
    printf("1 Check Even or Odd\n");
    printf("2 Solve Quadratic Equation\n");
    printf("3 Find Sum of Digits\n");
    printf("4 Check Leap Year\n");
    printf("5 Find Days in a Month\n");

    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        {
            int n;
            printf("Enter a number\n");
            scanf("%d", &n);

            if(n % 2 == 0)
                printf("The given number is Even");
            else
                printf("The given number is Odd");
            break;
        }

        case 2:
        {
            float a, b, c, d, r1, r2;
            printf("Enter values of a b and c\n");
            scanf("%f%f%f", &a, &b, &c);

            d = b*b - 4*a*c;

            if(d >= 0)
            {
                r1 = (-b + sqrt(d)) / (2*a);
                r2 = (-b - sqrt(d)) / (2*a);
                printf("The roots are %f and %f", r1, r2);
            }
            else
                printf("The equation has no real roots");
            break;
        }

        case 3:
        {
            int n, sum = 0;
            printf("Enter a number\n");
            scanf("%d", &n);

            while(n > 0)
            {
                sum += n % 10;
                n /= 10;
            }

            printf("The sum of digits is %d", sum);
            break;
        }

        case 4:
        {
            int year;
            printf("Enter a year\n");
            scanf("%d", &year);

            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                printf("The given year is a Leap Year");
            else
                printf("The given year is not a Leap Year");
            break;
        }

        case 5:
        {
            int month;
            printf("Enter month number\n");
            scanf("%d", &month);

            if(month == 2)
                printf("The given month has 28 or 29 days");
            else if(month == 4 || month == 6 || month == 9 || month == 11)
                printf("The given month has 30 days");
            else if(month >= 1 && month <= 12)
                printf("The given month has 31 days");
            else
                printf("Invalid month number");
            break;
        }

        default:
            printf("Invalid option selected");
    }

    return 0;
}
