#include<stdio.h>
int main()
{
    int t,m,n,i,s,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&m,&n);
        if(m>n) a=m-n;
        else a=n-m;
        s=19+(m*4)+(a*4);
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
