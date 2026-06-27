#include<stdio.h>
int main()
{
    int m[5], i, s=0;
    float per;
    printf("Enter 5 marks: ");
    for(i=0;i<5;i++)
    {
        scanf("%d", &m[i]);
    }
    for(i=0;i<5;i++)
    {
        s=s+m[i];
    }
    printf("Total marks are %d \n", s);
    per = (s/500.0)*100.0;
    printf("Total percentage are %f \n", per);
    return 0;
}