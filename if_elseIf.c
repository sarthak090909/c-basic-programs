#include<stdio.h>
int main(){
    int x; 
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x>0)
    {
        printf("The number %d is positive", x);
    }
    else if(x<0)
    {
        printf("The number %d is negative",x);
    }
    else
    {
        printf("The number %d is neither -ve nor +ve", x);
    }
    return 0;
}