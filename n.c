#include <stdio.h>
int main()
{
int a,b,s;
char operator;
printf("chose an operator '+' is addition,'-' is subtraction,'*' is multiplication,'/' is division\n");
scanf(" %c",&operator);
printf("enter the value of a and b");
scanf("%d%d",&a,&b);

switch(operator){
case '+':
s=a+b;
printf("adition of two numbers %d",s);
break;
case '-':
s=a-b;
printf("subtraction of two numbers %d",s);
break;
case '*':
s=a*b;
printf("multiply of two numbers %d",s);
break;
case '/':
s=a/b;
printf("division of two numbers %d",s);
}
return 0;
}
