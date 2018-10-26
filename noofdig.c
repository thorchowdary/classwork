#include<stdio.h>
int main()
{
int n,i,count;
printf("enter the value of n:");
scanf("%d",&n);

while (i != 0)
{
 i=n%10;
 count=count+1;
}
printf("number of digits is %d",count);
return 0;
}
