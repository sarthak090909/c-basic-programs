#include<stdio.h>
int main()
{
    int m[5], i, s=0, c=0;
    float per;
    printf("Enter 5 marks: \n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &per);
    }
    for(i=0; i<5; i++)
    {
        s = s+m[i];
        if(m[i]<40)
        {
            c= 1;
        }
    }
     
    printf("Total Marks are: %d", s);
    per = (s/500.0)*100.0;
    printf("Total percentage are %f", per);

    if(c=1)
    {
        printf("you failed");
    }
    else if(per>70)
    {
        printf("You got Distinction \n");
    }
    else if(per>60 && per<69)
    {
        printf("You got first class \n");
    }
    else if(per>55 && per<60)
    {
        printf("You got higher 2nd class \n");
    }
    else if (per>40)
    {
        printf("Pass \n");
    }
    return 0;
    

}