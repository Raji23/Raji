#include<stdio.h>
int main()
{
int number,Reminder,count=0;
printf("Enter the number:");
scanf("%d",number);
while(number>0)
{
number=number/10;
count=count+1;
}
printf("\nNumber of digits in the given number is=%d",count);
return 0;
}
