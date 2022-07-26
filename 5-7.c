#include<stdio.h>
int main()
{
int n,i,b;
printf("Enter a number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
b=n-i+1;
if(b%2==0)
printf("%d\n",b);
}
return 0;
}
