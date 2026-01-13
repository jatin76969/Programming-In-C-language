#include <stdio.h>
#include <math.h>

int main()
{
    int choice;

    printf("Choose your option\n");
    printf("1 Mean Variance and Standard Deviation\n");
    printf("2 Sum of Positive and Negative Numbers\n");
    printf("3 Transpose of a Matrix\n");
    printf("4 Lower Triangular Matrix\n");

    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        {
            int n, i;
            float a[50], sum = 0, mean, var = 0, sd;

            printf("Enter number of elements\n");
            scanf("%d", &n);

            printf("Enter the elements\n");
            for(i = 0; i < n; i++)
            {
                scanf("%f", &a[i]);
                sum += a[i];
            }

            mean = sum / n;

            for(i = 0; i < n; i++)
                var += (a[i] - mean) * (a[i] - mean);

            var = var / n;
            sd = sqrt(var);

            printf("Mean is %f\n", mean);
            printf("Variance is %f\n", var);
            printf("Standard Deviation is %f", sd);
            break;
        }

        case 2:
        {
            int n, i;
            int a[50], pos = 0, neg = 0;

            printf("Enter number of elements\n");
            scanf("%d", &n);

            printf("Enter the elements\n");
            for(i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
                if(a[i] > 0)
                    pos += a[i];
                else
                    neg += a[i];
            }

            printf("Sum of positive numbers is %d\n", pos);
            printf("Sum of negative numbers is %d", neg);
            break;
        }

        case 3:
        {
            int r, c, i, j;
            int a[10][10], t[10][10];

            printf("Enter number of rows and columns\n");
            scanf("%d%d", &r, &c);

            printf("Enter matrix elements\n");
            for(i = 0; i < r; i++)
                for(j = 0; j < c; j++)
                    scanf("%d", &a[i][j]);

            for(i = 0; i < c; i++)
                for(j = 0; j < r; j++)
                    t[i][j] = a[j][i];

            printf("Transpose of the matrix is\n");
            for(i = 0; i < c; i++)
            {
                for(j = 0; j < r; j++)
                    printf("%d ", t[i][j]);
                printf("\n");
            }
            break;
        }

        case 4:
        {
            int n, i, j;
            int a[10][10];

            printf("Enter order of square matrix\n");
            scanf("%d", &n);

            printf("Enter matrix elements\n");
            for(i = 0; i < n; i++)
                for(j = 0; j < n; j++)
                    scanf("%d", &a[i][j]);

            printf("Lower triangular matrix is\n");
            for(i = 0; i < n; i++)
            {
                for(j = 0; j < n; j++)
                {
                    if(i >= j)
                        printf("%d ", a[i][j]);
                    else
                        printf("0 ");
                }
                printf("\n");
            }
            break;
        }

        default:
            printf("Invalid option selected");
    }

    return 0;
}
