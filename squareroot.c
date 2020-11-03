#include<stdio.h>
main()
{
int i;
float j,n;
printf("\nEnter the no.:");
scanf("%f",&n);
j=n;
for(i=1;i<=n*2;i++)
{
j=(j+(n/j))/2.0;
}
printf("\nThe squareroot is:%f \n",j);
}
