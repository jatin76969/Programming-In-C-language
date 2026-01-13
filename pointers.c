#include <stdio.h>
#include <string.h>

int main()
{
    int choice;

    printf("Choose your option\n");
    printf("1 Sort Strings by Length using Pointers\n");
    printf("2 Calculate Area and Circumference of Circle using Pointers\n");

    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        {
            int n, i, j;
            char str[10][50];
            char *p[10], temp[50];

            printf("Enter number of strings\n");
            scanf("%d", &n);

            printf("Enter the strings\n");
            for(i = 0; i < n; i++)
            {
                scanf("%s", str[i]);
                p[i] = str[i];
            }

            for(i = 0; i < n - 1; i++)
            {
                for(j = i + 1; j < n; j++)
                {
                    if(strlen(p[i]) > strlen(p[j]))
                    {
                        strcpy(temp, p[i]);
                        strcpy(p[i], p[j]);
                        strcpy(p[j], temp);
                    }
                }
            }

            printf("Strings sorted by length are\n");
            for(i = 0; i < n; i++)
                printf("%s\n", p[i]);

            break;
        }

        case 2:
        {
            float radius, area, circumference;
            float *r, *a, *c;

            r = &radius;
            a = &area;
            c = &circumference;

            printf("Enter radius of the circle\n");
            scanf("%f", r);

            *a = 3.14 * (*r) * (*r);
            *c = 2 * 3.14 * (*r);

            printf("Area of the circle is %f\n", *a);
            printf("Circumference of the circle is %f", *c);

            break;
        }

        default:
            printf("Invalid option selected");
    }

    return 0;
}
