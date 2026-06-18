#include<stdio.h>
int add()
{
    int x, y, z;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    z = x+y;
    return 45;

}

int main(){
    int w;
    w=add();
    printf("Addition is %d", w);
    return 0;
    
}