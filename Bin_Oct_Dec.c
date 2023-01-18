/*Write a program to convert binary numbers to octal and binary numbers to decimal.*/

#include <stdio.h>
#include <math.h>

int BinarytoDecimal(int);
void BinarytoOctal(int);

int main()
{
    printf("Enter the binary number:\n");
    int num;
    scanf("%d", &num);
    int temp = num;

    while (temp != 0)
    {
        int x = temp % 10;
        if (x != 0 && x != 1)
        {
            printf("Invalid Binary number!!");
            return 0;
        }

        temp /= 10;
    }

    printf("\n-------------MENU-----------------\n");

    int choose;

    printf("1. Binary to Decimal\n2.Binary to Octal\n3.Quit\n--------------\n");
    int dec;
    while (1)
    {
        scanf("%d", &choose);
        if (choose == 3)
            break;
        else if (choose == 1)
        {
            dec = BinarytoDecimal(num);
            return 0;
        }
        else if (choose == 2)
        {
            BinarytoOctal(num);
            return 0;
        }
        else
            printf("\nPlease Re-enter again !!\n");
    }

    return 0;
}

int BinarytoDecimal(int num)
{
    int temp = num;
    int count = 0, i = 0;
    while (temp != 0)
    {
        int x = temp % 10;
        count += pow(2, i++) * x;
        temp /= 10;
    }

    printf("The Decimal of %d is %d", num, count);
    return count;
}
void BinarytoOctal(int num)
{
    int temp = BinarytoDecimal(num);
    int count = 0, i = 0;

    while (temp != 0)
    {
        count += pow(10, i++) * (temp % 8);
        temp /= 8;
    }

    printf("The Octal of %d is %d", num, count);
}