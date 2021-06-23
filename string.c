#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001],string[1001];

    //scanf("%s",str);
    //printf("%s",str);

    gets(string);
    //printf("%s",strupr(string));
    //printf("%s",strlwr(string));

    int i,c=0;
        i=strlen(string);
    for(i=0; string[i]!='\0';i++){
            if(string[i]!=' ') c++;
    }
    printf("%d",c);
    printf("%d",i);


}
