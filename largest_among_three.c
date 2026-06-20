#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c)
    {
        printf("a is the greatest number: %d", a);
    }
    else if(b>a && b>c)
    {
        printf("b is the grreatest number: %d", b);
    }
    else
    {
        printf("c is the greatest number: %d", c);
    }
    return 0;
}