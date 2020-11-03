#include<stdio.h>
main()
{
int n,num,rev=0,rem;
printf("\nEnter the number:");
scanf("%d",&num);
n=num;
while(num!=0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if(rev==n)
printf("\nNumber is palindrome.\n");
else
printf("\nNumber is not palindrome.\n");
}
