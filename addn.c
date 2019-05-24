#include<stdio.h>
int read(int a[],int);
int add(int a[],int);
void display(int);
int main()
{ 
    int a[100],n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int p=read(a,n);
    display(p);
}
int read(int a[],int n)
{
    int i=0;
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=add(a,n);
    return c;
}
int add(int a[],int n)
{
      int sum=0;
      for(int i=0;i<n;i++)
      {
         sum=(sum+a[i]);
      }
      return sum;
}  
void display(int t)
{
        printf("sum of n different numbers=%d",t);
}
