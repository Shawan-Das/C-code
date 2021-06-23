#include<stdio.h>
int main()
{
    int t,m,n,s,b,i;

    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&m,&n);
        s=((m*n)/2)+((m*n)%2);
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
