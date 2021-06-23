#include<stdio.h>
#include<string.h>
int main()
{
    char s[10],a[ ]="Hajj",b[ ]="Umrah";
    int i=1;
    while(scanf("%s",s)){
        if(strcmp(s,"*")) break;
   else if(!strcmp(s,"Hajj")) printf("Case %d: Hajj-e-Akbar\n",i);
   else if(!strcmp(s,"Umrah")) printf("Case %d: Hajj-e-Asghar\n",i);
   i++;
    }
    return 0;
}
