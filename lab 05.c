#include<stdio.h>
int main()
{
    int n,i,j,k,e,o;
    scanf("%d",&n); int A[n], Even[n], Odd[n];

    for(i=0;i<n;i++){
      scanf("%d",&A[i]);
    }
    j=0; k=0;
    for(i=0;i<n;i++){
        if(A[i]%2==0){ Even[j]=A[i]; j++; }
        else         { Odd[k]=A[i];  k++; }
    }
    printf("Even numbers are: ");
    for(i=0;i<j;i++){
        printf("%d ",Even[i]);
    }

    printf("\nOdd numbers are: ");
    for(i=0;i<k;i++){
        printf("%d ",Odd[i]);
    }
}
