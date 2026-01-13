#include <stdio.h>

union data
{
    int i;
    float f;
    char c;
};

int main()
{
    union data d;

    printf("Enter integer value\n");
    scanf("%d", &d.i);
    printf("Stored integer value is %d\n", d.i);

    printf("Enter float value\n");
    scanf("%f", &d.f);
    printf("Stored float value is %f\n", d.f);

    printf("Enter character value\n");
    scanf(" %c", &d.c);
    printf("Stored character value is %c\n", d.c);

    return 0;
}
