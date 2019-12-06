#include<iostream>
using namespace std:

int main()
{
   int num1,sum=0;
   printf("\nEnter a number to check palindrome\n");
   cin>>num1;
   int temp=num1;
   while(temp)
   {
      int rem=temp%10
      sum=sum*10+rem;
      temp=temp/10;
   }

   if(sum==num1)
     printf("\n %d is a palindrome number",num1);
   else
     printf("\n %d is not a palindrome number",num1);
}
