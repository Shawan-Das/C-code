#include<stdio.h>
int sum(int x,int n)
{
    if(x<n) return 0;
    else {sum(x+1,n);
    printf("%d\n",x);
    return 0; }
}
int main()
{
    int n;
    sum(0,5);
    return 0;
}
