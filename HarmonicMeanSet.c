/*Write a program to find the harmonic mean of a set of n numbers.*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the total number of values:");
    scanf("%d", &n);

    float count = 0.0, value;
    for (int i = 0; i < n; i++)
    {
        printf("Enter value %d:", i + 1);
        scanf("%f", &value);

        count += 1 / value;
    }
    float harmonicMean;
    harmonicMean = n / count;

    printf("The Harmonic mean is: %f", harmonicMean);
    return 0;
}