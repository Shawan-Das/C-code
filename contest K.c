#include<stdio.h>
int main()
{
    int t,n,i,j,k,x,y,a,b,m,l;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&n,&x);  int A[n];
        for(j=0;j<n;j++){
            scanf("%d",&A[j]);
        }  printf("Case %d:\n",i); k=1;
        while(k<=x){
            scanf("%d %d",&a,&b);
            m=0; l=n-1;
            while(m<=l)
                {
                    if(A[m]>=a&&A[l]<=b) break;
                    if(A[m]<a) m++;   else m=m;
                    if(A[l]>b) l--;   else l=l;
                }
            printf("%d\n",l-m+1); k++;
        }
    }
    return 0;
}
