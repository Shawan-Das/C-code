#include<stdio.h>
int main()
{
    int max1,max2,i,n,A[1001];

    scanf("%d",&n);

    for(i=0;i<n;i++) scanf("%d",&A[i]);

    max1=A[0]; max2=A[0];

    for(i=1;i<n;i++){
        if(A[i]>A[max1]){
            max2=max1;
            max1=A[i];
        }
        else if(A[i]>A[max2]) max2=A[i];
    }

    printf("%d %d",max1,max2);
}
