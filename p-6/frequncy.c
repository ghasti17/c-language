#include <stdio.h>

main()
{
    char str[100];
    int length = 0;

    printf("enter any string :");
    scanf("%s", &str); // n a y 
    //                    0 1 2 3 4

    /*

     n => 2
     a => 2
     y => 1
    */

    while (str[length] != '\0')
    {
        length++;
    }
    for (int i = 0; i < length; i++)
    {

        int frequ = 1;
        for (int j = i + 1; j < length; j++)
        {
            if (str[i] == str[j]) // str[0] == str[4] // n == n
            {
                frequ++; // f = 2
                str[j] = '\0';
            }
        }
       if(str[i] != '\0') {
         printf("%c => %d\n", str[i], frequ); // n => 2
       }
    }
}
