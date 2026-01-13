#include <stdio.h>

int length(char s[])
{
    int i = 0;
    while(s[i] != '\0')
        i++;
    return i;
}

void copy(char s1[], char s2[])
{
    int i = 0;
    while(s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
}

int compare(char s1[], char s2[])
{
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] != s2[i])
            return 1;
        i++;
    }
    if(s1[i] == '\0' && s2[i] == '\0')
        return 0;
    else
        return 1;
}

int main()
{
    int choice;
    char str1[100], str2[100], result[100];

    printf("Choose your option\n");
    printf("1 Find Length of String\n");
    printf("2 Copy String\n");
    printf("3 Compare Strings\n");

    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter a string\n");
            scanf("%s", str1);

            printf("Length of the string is %d", length(str1));
            break;

        case 2:
            printf("Enter a string\n");
            scanf("%s", str1);

            copy(str1, result);

            printf("Copied string is %s", result);
            break;

        case 3:
            printf("Enter first string\n");
            scanf("%s", str1);

            printf("Enter second string\n");
            scanf("%s", str2);

            if(compare(str1, str2) == 0)
                printf("Both strings are equal");
            else
                printf("Strings are not equal");
            break;

        default:
            printf("Invalid option selected");
    }

    return 0;
}
