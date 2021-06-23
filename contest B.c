#include<stdio.h>
int main()
{
    int t,i,j,n,s;
    scanf("%d",&t);

    for(i=1;i<=t;i++){
        scanf("%d",&n); int A[n],s=0;
        for(j=0;j<n;j++){
            scanf("%d",&A[j]);
            if(A[j]>0) s=s+A[j];
        }
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
