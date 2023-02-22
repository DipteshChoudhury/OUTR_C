/* Write a program to find the maximum, the minimum and their occurance in an array of numbers.*/

#include <stdio.h>

void countMaxMin(int a[], int n)
{
    int max = a[0], min = a[0], cmax = 0, cmin = 0;

    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (max == a[i])
        {
            cmax++;
        }
        if (min == a[i])
        {
            cmin++;
        }
    }

    printf("Max Num = %d \t Min Num = %d", max, min);
    printf("\nOccurance of max min num is %d,%d respectivly", cmax, cmin);
}
int main()
{
    int n;

    printf("Array Length :-");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements :- ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    countMaxMin(a, n);
    return 0;
}