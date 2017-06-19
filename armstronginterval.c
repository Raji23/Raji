#include<stdio.h>
#include<conio.h>
int main()
{
int beg,end,digit,sum,temp,cube,i,num;
printf("Enter the begining of the interval\n");
scanf("%d",&beg);
printf("Enter the end of the interval\n");
scanf("%d",&end);
for(i=beg;i<=end;i++)
{
sum=0;
num=i;
do
{
digit=num%10;
num=num/10;
cube=digit*digit*digit;
sum=sum+cube;
}
while(num>0);
if(sum==i)
printf("%d",i);
}
return 0;
}
