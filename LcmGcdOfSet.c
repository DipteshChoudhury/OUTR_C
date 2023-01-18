/*Write a menu based program to find LCM and GCD of a set of numbers*/

#include <stdio.h>

int LCM(int, int);
int GCD(int, int);

int main()
{
    printf("Enter any two numbers:\n");
    int num1, num2;
    scanf("%d%d", &num1, &num2);

    printf("\n-------------MENU-----------------\n");

    int choose;

    printf("1. LCM\n2.GCD\n3.Quit\n--------------\n");

    while (1)
    {
        scanf("%d", &choose);
        if (choose == 3)
            break;
        else if (choose == 1)
        {
            int x = LCM(num1, num2);
            printf("\nThe LCM of %d and %d is %d", num1, num2, x);
            return 0;
        }
        else if (choose == 2)
        {
            int x = GCD(num1, num2);
            printf("\nThe GCD of %d and %d is %d", num1, num2, x);
            return 0;
        }
        else
            printf("\nPlease Re-enter again !!\n");
    }

    return 0;
}

int LCM(int num1, int num2)
{
    return (num1 * num2) / GCD(num1, num2);
}
int GCD(int num1, int num2)
{
    int gcd = 0;

    for (int i = 1; i < num1 || i < num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }
    return gcd;
}