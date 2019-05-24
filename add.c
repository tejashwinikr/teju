#include<stdio.h>
int read();
void display(int);
int add(int,int);
int main()
 {
    int s=read();
    display(s);
 }
int read()
 {
      int a,b,c;
      printf("enter numbers to add");
      scanf("%d%d",&a,&b);
      c=add(a,b);
      return c;
 }
int add(int a,int b)
{
      int c;
      c=a+b;
      return c;
}
void display(int c)
{
      printf("sum=%d",c);
}


