#include<stdio.h>
int main()
{
    int i,x,y, s=1;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    for(i=x>y?x:y; i<x*y;i++)
    {
        if(i%x == 0 && i%y==0){
            printf("The lcm is %d: ", i);
        }
    }
    return 0;
}