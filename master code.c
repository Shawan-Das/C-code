#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char string[1001];
    int i,j,x;
    while(printf("Enter The Number: ") && scanf("%d",&x)!=EOF)
        {
        gets(string);

        printf("%s\n\n",strupr(string));

        printf("\n\n\n");

      if(x==8339){ printf("Excess Granted. \n Welcome to Windows 10\n Please connect you phone \n\n"); break; }
      else printf("Excess Denied \n Please try again \n\n");
        }
    return 0;
}

