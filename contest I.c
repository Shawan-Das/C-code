#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0,e,o;
    scanf("%d",&n);  int A[n];

    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
        if(A[i]%2==0){
            even++; e=i;
        }
        else{
            odd++; o=i;
        }
    }
    if(even==1) printf("%d\n",e+1);
    if(odd==1) printf("%d\n",o+1);
    return 0;
}
