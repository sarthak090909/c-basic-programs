#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c)
    {
        printf("Greates is number %d", a);
    }
    else if(b>a && b>c)
    {
        printf("Greatest number is %d", b);
    }
    else if(c>a && c>b)
    {
        printf("Greates Number is %d", c);
    }
    else if(a==b && b==c)
    {
        printf("All numbers are equal", a, b, c);
    }
    return 0;
}