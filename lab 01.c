#include<stdio.h>
int main()
{
    int a,i,n,max,min;
    scanf("%d",&n);
    int A[n];

    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    max=A[0]; min=A[0];

    for(i=1;i<n;i++){
        if(A[i]>max) max=A[i];
        if(A[i]<min) min=A[i];
    }
    printf("max number: %d \n Min Number: %d",max,min);
    return 0;
}
