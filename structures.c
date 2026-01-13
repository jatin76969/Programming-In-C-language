#include <stdio.h>

struct distance
{
    int meter;
    int centimeter;
};

struct student
{
    int marks[5];
};

int main()
{
    int choice;

    printf("Choose your option\n");
    printf("1 Add Two Distances\n");
    printf("2 Calculate CGPA\n");

    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        {
            struct distance d1, d2, sum;

            printf("Enter first distance in meter and centimeter\n");
            scanf("%d%d", &d1.meter, &d1.centimeter);

            printf("Enter second distance in meter and centimeter\n");
            scanf("%d%d", &d2.meter, &d2.centimeter);

            sum.meter = d1.meter + d2.meter;
            sum.centimeter = d1.centimeter + d2.centimeter;

            if(sum.centimeter >= 100)
            {
                sum.meter = sum.meter + 1;
                sum.centimeter = sum.centimeter - 100;
            }

            printf("Total distance is %d meter and %d centimeter", sum.meter, sum.centimeter);
            break;
        }

        case 2:
        {
            struct student s;
            int i, total = 0;
            float cgpa;

            printf("Enter marks of 5 subjects\n");
            for(i = 0; i < 5; i++)
            {
                scanf("%d", &s.marks[i]);
                total = total + s.marks[i];
            }

            cgpa = total / 50.0;

            printf("CGPA is %f", cgpa);
            break;
        }

        default:
            printf("Invalid option selected");
    }

    return 0;
}
