#include<stdio.h>
int add (int,int);
int main()
{
int a,b,c;
printf("enter two numbers");
scanf("%d %d",&a,&b);
c=add(a,b);
printf("sum=%d",c);
}
int add(int a,int b)
{
int c;
c=a+b;
return c;
}
