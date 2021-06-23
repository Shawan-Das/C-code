#include<stdio.h>
typedef struct
{
    char name[1001], gender;
    int age; float income;
}movieStar;
int age(movieStar s[ ],int n)
{
  int a=s[0].age, i;
  for(i=1;i<n;i++){
    if(s[i].age<a) a=s[i].age;
  }
  return a;
}
int main()
{
    int i, n;
    scanf("%d",&n); getchar( );
    movieStar s[n];

    for(i=0;i<n;i++){
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
    printf("The Youngest Movie Stars Age: %d",age(s,n));

    return 0;
}
