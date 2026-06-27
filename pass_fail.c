#include<stdio.h>
int main()
{
    int m[5], i, s=0, c=0;
    float per;
    printf("Enter 5 marks: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", m[i]);
    }
    for(i=0; i<5; i++)
    {
        s = s+m[i];
        if(m[i]<40)
        {
            c= c+1;
        }
    }
    printf("Total Marks are: %d", s);
    per = (s/500.0)*100;
    printf("Total percentage are %f", per);

    if(m[i]>70)
    {
        printf("You got Distinction");
    }
    else if(m[i]>60 && m[i]<69)
    {
        printf("You got first class");
    }
    else if(m[i]>55 && m[i]<60)
    {
        printf("You got higher 2nd class");
    }
    else if (m[i]>40)
    {
        printf("Pass");
    }
    return 0;
    

}