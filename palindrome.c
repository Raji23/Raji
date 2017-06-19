#include <stdio.h>
#include<conio.h> 
int main()
{
   int n, reverse = 0, temp;
    printf("Enter a number to check \n");
   scanf("%d",&n);
    temp = n;
    while( temp != 0 )
   {
      reverse = reverse * 10;
      reverse = reverse + temp%10;
      temp = temp/10;
   }
    if ( n == reverse )
      printf("%d is a palindrome number.\n", n);
   else
      printf("%d is not a palindrome number.\n", n);
  getch();
   return 0;
