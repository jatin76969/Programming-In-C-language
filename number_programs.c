#include <stdio.h>
#include <math.h>

int main()
{
    int choice;

    printf("Choose your option\n");
    printf("1 Calculate Simple Interest\n");
    printf("2 Check Prime Number\n");
    printf("3 Check Armstrong Number\n");

    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        {
            float p, r, t, si;

            printf("Enter principal amount\n");
            scanf("%f", &p);

            printf("Enter rate of interest\n");
            scanf("%f", &r);

            printf("Enter time in years\n");
            scanf("%f", &t);

            si = (p * r * t) / 100;

            printf("Simple Interest is %f", si);
            break;
        }

        case 2:
        {
            int n, i, flag = 1;

            printf("Enter a number\n");
            scanf("%d", &n);

            if(n <= 1)
                flag = 0;

            for(i = 2; i <= n / 2; i++)
            {
                if(n % i == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if(flag == 1)
                printf("The given number is a Prime Number");
            else
                printf("The given number is not a Prime Number");
            break;
        }

        case 3:
        {
            int num, temp, sum = 0, digit;

            printf("Enter a number\n");
            scanf("%d", &num);

            temp = num;

            while(temp > 0)
            {
                digit = temp % 10;
                sum = sum + digit * digit * digit;
                temp = temp / 10;
            }

            if(sum == num)
                printf("The given number is an Armstrong Number");
            else
                printf("The given number is not an Armstrong Number");
            break;
        }

        default:
            printf("Invalid option selected");
    }

    return 0;
}
