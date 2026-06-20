#include <stdio.h>

main()
{
    char str[100];
    int length = 0;
    int palin = 1;

    printf("enter your str :");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length++;
    }
    for (int i = 0; i < length; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            palin = 0;
        }
    }
    if (palin)
    {
        printf("The given string is palindrome :%s", str);
    }
        else 
        {
        printf("The given sring is not palindrome :%s ", str);
        }
}
