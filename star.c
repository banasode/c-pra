

#include <stdio.h>

int main()
{
int i,j;
int n=4;
for(i=1;i<=4;i++)
{
    for(j=1;j<=7;j++)
    {
        if(j>=n-(i-1)&&j<=n+(i-1))
     printf("*");
     else
     printf(" ");
    }
printf("\n");
}
   return 0;
}
