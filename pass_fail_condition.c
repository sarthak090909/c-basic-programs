#include<stdio.h>
int main()
{
    int a[5], i;
    int c=0, s=0;
    float per;
    printf("Enert 5 numbers: ");
    for(i=0;i<5;i++){
        scanf("%d", &a[i]);
        if(a[i]<40){
            c++;
        }
    }
    for(i=0;i<5;i+++){
        s = s+a[i];
        printf("Total marks are: %d \n",s);
        per = (s/500.0)*100;
        if(per)


    }
}