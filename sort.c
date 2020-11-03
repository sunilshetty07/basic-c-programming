#include<stdio.h>
main()
{
int i,j,a[10],n,t;
printf("\nEnter the no of elements:");
scanf("%d",&n);
printf("\nEnter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j+1]<a[j])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("\nElements after sorting:");
for(i=0;i<n;i++)
{printf("%d \t",a[i]);
}
printf("\n");
}
