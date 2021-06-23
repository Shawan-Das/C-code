#include<stdio.h>
typedef struct
{
    char name[1001], gender;
    int age; float income;
}movieStar;
float income(movieStar s[ ],int n)
{
  float a=s[0].income; int i;
  for(i=1;i<n;i++)
  {
    if(s[i].income>a) a=s[i].income;
  }
  return a;
}
int main()
{
    int i, n; scanf("%d",&n); getchar( );
    movieStar s[n];

    for(i=0;i<n;i++)
        {
        printf("Name ");
    gets(s[i].name);
    printf("Age ");
     scanf("%d",&s[i].age);
    printf("Annual income ");
    scanf("%f",&s[i].income); getchar( );
    printf("Gender ");
    scanf("%c",&s[i].gender); getchar( );
    printf("\n");
    }
    printf("Highest income: %f",income(s,n));

    return 0;
}

