/*
Write a program which reads a set of marks in an examination, count the number of pass marks,
number of fail marks, percentage of pass and fail.
*/
#include <stdio.h>

int main()
{
    int n;
    float pass, fail;
    printf("Enter no. of marks you want to enter? ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d no. of marks(from 100):-", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 30 && a[i] > 0)
        {
            pass++;
        }
        else if (a[i] >= 30 && a[i] < 101)
        {
            fail++;
        }
    }

    printf("Pass %% is %.2f & Fail %% is %.2f", (pass * 100) / n, (fail * 100) / n);

    return 0;
}