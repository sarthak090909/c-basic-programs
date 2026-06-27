#include<stdio.h>
#include<string.h>
int main()
{
    char ch[]= {"amit"};
    char n[]= {'a', 'n', 'u', 'j', '\0'};
    char p[20];
    puts("Enter a string: ");
    gets(p);
    printf("%s", p);
    printf("%s", n);
    return 0;
}