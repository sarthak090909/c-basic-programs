#include<stdio.h>
int main()
{
    int m[5] = {"amit"};
    char n[] = {'a','n','u','j'};
    char p[20];
    puts("Enter a string: ");
    gets(p);
    printf("%s", p);
    printf("%s", n);

    int a[5], i, s=0;
    float per;
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d", &a);
    }
    for(i=0;i<5;i++)
    {
        s=s+a[i];;
    }
    printf("Total marks are: %d", s);
    per = (s/500.0)*100;
    printf("\n Percentage %d", per);
    return 0;

}