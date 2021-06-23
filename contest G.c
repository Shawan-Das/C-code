#include<stdio.h>
int main()
{
    long long t,i,m,n,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lld %lld",&n,&m);
        s=m*(n/2);
        printf("Case %lld: %lld\n",i,s);
    }
    return 0;
}
