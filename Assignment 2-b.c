#include<stdio.h>
typedef struct
{
    int id;
    char g;
    float ct,mt,fx,tl;
}cse;

int main()
{
    int i,n;
    scanf("%d",&n);
    cse s[n];
    for(i=0;i<n;i++)
        {
        printf("ID ");
    scanf("%d",&s[i].id); getchar( );
    printf("Gender ");
    scanf("%c",&s[i].g);
    printf("Class test score ");
    scanf("%f",&s[i].ct);
    printf("Mid-term score ");
    scanf("%f",&s[i].mt);
    printf("Final Exam score ");
    scanf("%f",&s[i].fx);
    s[i].tl=s[i].ct+s[i].mt+s[i].fx;
    printf("Total score %0.2f\n",s[i].tl);
    printf("\n");
    }

    return 0;
}
