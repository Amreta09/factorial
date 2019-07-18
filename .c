#include<stdio.h>
int fac(int);
int main()
{
int res,n;
scanf("%d",&n);
res=fac(n);
printf("%d",res);
return 0;
}
int fac(int n)
{
if(n!=0)
{
return n*fac(n-1);
}
else
{
return 1;
}
}
