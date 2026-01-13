#include <stdio.h>
#include <string.h>

int main()
{
    int choice;
    char str1[100], str2[100], result[200];

    printf("Choose your option\n");
    printf("1 Copy String\n");
    printf("2 Concatenate Strings\n");
    printf("3 Compare Strings\n");

    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter first string\n");
            scanf("%s", str1);

            strcpy(result, str1);

            printf("Copied string is %s", result);
            break;

        case 2:
            printf("Enter first string\n");
            scanf("%s", str1);

            printf("Enter second string\n");
            scanf("%s", str2);

            strcpy(result, str1);
            strcat(result, str2);

            printf("Concatenated string is %s", result);
            break;

        case 3:
            printf("Enter first string\n");
            scanf("%s", str1);

            printf("Enter second string\n");
            scanf("%s", str2);

            if(strcmp(str1, str2) == 0)
                printf("Both strings are equal");
            else
                printf("Strings are not equal");
            break;

        default:
            printf("Invalid option selected");
    }

    return 0;
}
