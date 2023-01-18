// Swapping of 3 variables

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 integers :-");
    scanf("%d%d%d", &a, &b, &c);

    printf("Before Swapping a=%d\tb=%d\tc=%d\n", a, b, c);
    // swapping code
    a = a + b + c;
    b = a - b - c;
    c = a - b - c;
    a = a - b - c;

    printf("After Swapping a=%d\tb=%d\tc=%d\n", a, b, c);
    scanf("%d%d%d", &a, &b, &c);
    return 0;
}