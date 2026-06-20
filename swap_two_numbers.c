#include<stdio.h>
int main()
{
    int a, b , temporary;
    printf("Enter two numbers :");
    scanf("%d %d", &a, &b);

    temporary = a;
    a = b;
    b = temporary;

    printf("After Swapping\n");
    printf("a =  %d ,\n b = %d ", a,b);

    return 0;
}