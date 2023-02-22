/*  Write a menu based program to implement sorting algorithms.  */

#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}

void bubble_sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("After Bubble sort Elements are : ");
    display(arr, n);
}

void selection_sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("After Selection sort Elements are : ");
    display(arr, n);
}

void insertion_sort(int arr[], int n)
{
    int i, j, min;
    for (i = 1; i < n; i++)
    {
        min = arr[i];
        j = i - 1;
        while (min < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = min;
    }
    printf("After Insertion sort Elements are : ");
    display(arr, n);
}
int main()
{
    int n, choice, i;
    printf("Enter no. of elements u want to sort : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter %d Element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Please select any option Given Below for Sorting : \n");

    printf("\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort");
    printf("\nEnter your Choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        bubble_sort(arr, n);
        break;
    case 2:
        selection_sort(arr, n);
        break;
    case 3:
        insertion_sort(arr, n);
        break;
    default:
        printf("\nPlease Select only 1-3 option ----\n");
    }

    return 0;
}
