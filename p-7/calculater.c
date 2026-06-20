#include<stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}

int mod(int a, int b)
{
    return a % b;
}

int main()
{
    int num1, num2, choice;

    while (1)
    {
        printf("\n===== Arithmetic Menu =====\n");
        printf("1.press 1 for (+)\n");
        printf("2.press 2 for (-)\n");
        printf("3.press 3 for (*)\n");
        printf("4.press 4 for (/)\n");
        printf("5.press 5 for (%%)\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5)
        {
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
        }

        switch (choice)
        {
            case 1:
                printf("Result = %d\n", add(num1, num2));
                break;

            case 2:
                printf("Result = %d\n", sub(num1, num2));
                break;

            case 3:
                printf("Result = %d\n", mul(num1, num2));
                break;

            case 4:
                if (num2 != 0)
                    printf("Result = %.2f\n", divide(num1, num2));
                else
                    printf("Division by zero is not allowed.\n");
                break;

            case 5:
                if (num2 != 0)
                    printf("Result = %d\n", mod(num1, num2));
                else
                    printf("Modulus by zero is not allowed.\n");
                break;

            case 6:
                printf("Program Terminated.\n");
                return 0;

            default:
                printf("Invalid Choice! Please try again.\n");
        }
    }

    return 0;
}