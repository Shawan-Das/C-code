#include<stdio.h>
int main()
{
    int n,i,j;

    scanf("%d",&n); int A[n],B[n];

    for(i=0,j=0;i<n;i++,j++){
        scanf("%d",&A[i]);
        B[j]=A[j];
        printf("%d ",B[j]);
    }
    return 0;
}
