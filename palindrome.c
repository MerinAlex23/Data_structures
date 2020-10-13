#include<stdio.h>
void main()
{
int n,m,rem,s=0,i;
printf("enter any no");
scanf("%d",&n);
m=n;
while(n!=0)
{rem=n%10;
s=(s*10)+rem;
n=n/10;}
if(s==m)
 { printf("palindrome");}
else
 { printf("not palindrome");}
}


