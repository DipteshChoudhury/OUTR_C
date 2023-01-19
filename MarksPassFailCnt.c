/*
Write a program which reads a set of marks in an examination, count the number of pass marks,
number of fail marks, percentage of pass and fail.
*/
#include <stdio.h>

int main()
{
    int n, mark;
    float pass, fail;
    printf("Enter no. of marks? ");
    scanf("%d", &n);

    printf("Enter %d no. of marks(from 100):-\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter mark :-");
        scanf("%d", &mark);
        if (mark < 30 && mark > 0)
        {
            fail++;
        }
    }
    pass = n - fail;
    printf("No. of pass :-%.0f\nNo. of fail:-%.0f\n", pass, fail);
    printf("Pass %% is %.2f & Fail %% is %.2f", (pass * 100) / n, (fail * 100) / n);

    return 0;
}