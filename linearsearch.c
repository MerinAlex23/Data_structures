#include <stdio.h>
void main()
{
int i,n,a,flag,arr[50];
printf("limit of array");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
{scanf("%d",&arr[i]);}
printf("array elements are");
for(i=0;i<n;i++)
{printf("%d\n",arr[i]);}
printf("value to search");
scanf("%d",&a);
for (i=0;i<n;i++)
{if (arr[i]==a)
printf("element found");
else
printf("element not found");}
}
