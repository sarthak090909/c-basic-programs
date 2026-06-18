#include<stdio.h>
int main(){
    int x=78, *y, **z;
    y= &x;
    z= &y;
    // *y= 45;
    // **z= 45;
    printf("%d", x);

    return 0;
}