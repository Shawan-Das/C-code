#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,a,b,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d",&a,&b,&c);
        a=pow(a,2);  b=pow(b,2);  c=pow(c,2);

        if((b+c==a)) printf("Case %d: yes\n",i);
   else if((a+c==b)) printf("Case %d: yes\n",i);
   else if((a+b==c)) printf("Case %d: yes\n",i);
   else printf("Case %d: no\n",i);
    }
    return 0;
}
