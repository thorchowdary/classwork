# include <stdio.h>
# include <math.h>
int main ()
{
double a;
double b;
double c;
double d;
double r1;
double r2;
double i;
scanf("%lf%lf%lf",&a,&b,&c);
d=(b*b)-(4*a*c);
if (d>0){
r1=(-b)+(sqrt(d))/2*a;
r2=(-b)-(sqrt(d))/2*a;
printf("%lf%lf",r1,r2);
}
else if (d==0){
r1=(-b)/2*a;
printf("%lf",r1);
}
else {
r1=(-b)/2*a;
i=(-d)/2*a;
printf("%lf",r1);
printf("%lf",i);
}
return 0;
}
