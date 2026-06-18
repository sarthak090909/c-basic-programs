#include<stdio.h>

struct Rohit_sharma
{
    int jersey_no;
    char nick_name[20];
    float average;
    int best_score;
};

int main()
{
    struct Rohit_sharma rs;

    printf("The Jersey Number is : ");
    scanf("%d", &rs.jersey_no);

    printf("Nickname is: ");
    scanf("%s", rs.nick_name);

    printf("The average is: ");
    scanf("%f", &rs.average);

    printf("Best score is : ");
    scanf("%d", &rs.best_score);

    printf("\n%d %s %.2f %d",
           rs.jersey_no,
           rs.nick_name,
           rs.average,
           rs.best_score);

    return 0;
}