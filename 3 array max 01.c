#include<stdio.h>
int main()
{
    int i,n,max;
    scanf("%d",&n);  int A[n],B[n],C[n];

    for(i=0;i<n;i++)  scanf("%d",&A[i]);
    for(i=0;i<n;i++)  scanf("%d",&B[i]);
    for(i=0;i<n;i++)  scanf("%d",&C[i]);
    max=A[0];
    for(i=0;i<n;i++){
        if(A[i]>max) max=A[i];
        if(B[i]>max) max=B[i];
        if(C[i]>max) max=C[i];
    }
    printf("%d ",max);
    return 0;
}
