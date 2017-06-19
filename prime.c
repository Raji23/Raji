#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
clrscr();
printf("Enter any number");
scanf("%d",&n);  
for(i=2;i<=n-1; i++)
{
if(n%i==0)
{
break;
}
if(n==i)
{
printf("\n Prime number");
}
else
{
printf("\n Not a prime number");
}
getch();
return 0;
}
