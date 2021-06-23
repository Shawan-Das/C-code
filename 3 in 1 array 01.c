#include<stdio.h>
int main()
{
    int i,n,max,l,m,j,x=0;
    scanf("%d",&l); scanf("%d",&m); scanf("%d",&n);
    int A[l],B[m],C[n],Max[l+m+n-3];;

    for(i=0;i<l;i++)  scanf("%d",&A[i]);
    for(i=0;i<m;i++)  scanf("%d",&B[i]);
    for(i=0;i<n;i++)  scanf("%d",&C[i]);

    for(i=0;i<l;i++) Max[x++]=A[i];

    for(i=0;i<m;i++) Max[x++]=B[i];

    for(i=0;i<n;i++) Max[x++]=C[i];

    for(i=0;i<x;i++) printf("%d ",Max[i]);

    return 0;

}

