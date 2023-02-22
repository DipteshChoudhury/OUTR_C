/* Write a program to find the kth smallest element in an array of numbers. */
#include <stdio.h>

int kthSmallEle(int a[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                a[i] += a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
    return a[k - 1];
}
int main()
{
    int n, k;

    printf("Array Length :-");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements :- ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter k:-");
    scanf("%d", &k);
    printf("%d th smallest element :- %d.", k, kthSmallEle(a, n, k));
    return 0;
}