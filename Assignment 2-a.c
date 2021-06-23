#include<stdio.h>
typedef struct
{
    int id;
    char g;
    float ct,mt,fx,tl;
}cse;
int main()
{
    cse s;

    printf("ID ");
     scanf("%d",&s.id); getchar( );
    printf("Gender ");
     scanf("%c",&s.g);
    printf("Class test score ");
    scanf("%f",&s.ct);
    printf("Mid-term score ");
    scanf("%f",&s.mt);
    printf("Final Exam score ");
    scanf("%f",&s.fx);
    s.tl=s.ct+s.mt+s.fx;
    printf("Total score %0.2f\n",s.tl);

    return 0;
}
