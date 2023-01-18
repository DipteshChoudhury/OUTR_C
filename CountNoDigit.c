/*Write a program to count the number of digits in an integer.*/
#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    int cnt = 0;
    int temp = num;
    for (int temp = num; temp != 0; cnt++, temp /= 10)
        ;

    printf("\nThe number of digits in %d are %d", num, cnt);
    return 0;
}