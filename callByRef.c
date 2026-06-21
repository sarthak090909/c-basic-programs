#include<stdio.h>
void func1(int *n)
{
    *n=78;
}

int main()
{
    int x = 3;
    func1(&x);
    printf("%d", x);
    return 0;
}