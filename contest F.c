#include<stdio.h>
int main()
{
    int n,t,i,s,a;
    scanf("%d",&t);

    for(i=1;i<=t;i++){
        scanf("%d",&n);
        a=n; s=0;
        while(a!=0){
            s=(s*10)+(a%10);
            a=a/10;
        }
        if(s==n){
            printf("Case %d: Yes\n",i);
        }
        else{
            printf("Case %d: No\n",i);
        }
    }
    return 0;
}
