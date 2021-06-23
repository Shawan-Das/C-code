#include<stdio.h>
typedef struct
{
    char name[1001], gender[8];
    int age;
    float income;
}movieStar;

int main()
{
    movieStar s;

    printf("Name ");
    gets(s.name);
    printf("Age ");
    scanf("%d",&s.age);
    printf("Annual income ");
    scanf("%f",&s.income); getchar( );
    printf("Gender ");    gets(s.gender);

    return 0;
}
