#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the range: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum= sum+i;
    }
    printf("Addition of first %d numbers= %d \n",n,sum);
    return 0;
}