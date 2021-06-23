#include<stdio.h>
int main()
{
    int i,n,j=0,max;
    scanf("%d",&n);  int A[n],B[n],C[n],Max[(3*n)-3];

    for(i=0;i<n;i++)  scanf("%d",&A[i]);
    for(i=0;i<n;i++)  scanf("%d",&B[i]);
    for(i=0;i<n;i++)  scanf("%d",&C[i]);
    for(i=0;i<n;i++)  Max[j++]=A[i];
    for(i=0;i<n;i++)  Max[j++]=B[i];
    for(i=0;i<n;i++)  Max[j++]=C[i];

    for(i=0;i<j;i++) printf("%d ",Max[i]);

    return 0;
}
