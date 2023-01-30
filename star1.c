

#include <stdio.h>

int main()
{
int i,j;
int n=1;
for(i=1;i<=5;i++) //row
{
    for(j=1;j<=5;j++) //column
     {
  if(j<=i)
     printf("*");
   else
     printf(" ");
    }
printf("\n");
}
   return 0;
}
