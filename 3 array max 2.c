#include<stdio.h>
int main()
{
    int i,n,max,l,m;
    scanf("%d",&l); scanf("%d",&m); scanf("%d",&n);
    int A[l],B[m],C[n];

    for(i=0;i<l;i++)  scanf("%d",&A[i]);
    for(i=0;i<m;i++)  scanf("%d",&B[i]);
    for(i=0;i<n;i++)  scanf("%d",&C[i]);

    max=A[0];

    for(i=0;i<l;i++) if(A[i]>max) max=A[i];

    for(i=0;i<m;i++) if(B[i]>max) max=B[i];

    for(i=0;i<n;i++) if(C[i]>max) max=C[i];

    printf("%d ",max);
    return 0;
}

