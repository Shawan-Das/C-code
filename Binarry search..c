#include<stdio.h>
int main()
{
    int n,i,first,last,mid,target,sweap;

    scanf("%d",&n);  int A[n];

    for(i=0;i<n;i++) scanf("%d",&A[i]);
int j,f=-1;
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(A[j]>A[j+1])
                {
                    sweap=A[j];
                    A[j]=A[j+1];
                    A[j+1]=sweap;
                }
        }
    }
    for(i=0;i<n;i++) printf("%d ",A[i]);
    scanf("%d",&target);

    first=0; last=n-1;

    while(first<=last){
        mid=(first+last)/2;
        if(A[mid]<target) first=mid+1;
   else if(A[mid]>target) last=mid-1;
   else { f=mid; break;}
    }
    if(f==-1) printf("Not Valid");
    else printf("valid in %d",f+1);
    return 0;
}
