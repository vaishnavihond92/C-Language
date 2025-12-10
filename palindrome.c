#include<stdio.h>
void main()
{
   int num,d,rev=0,num1;
   printf("enter number :");
   scanf("%d",&num);
   num1=num;
   
   while(num>0)
     {
        d=num%10;
        rev=rev*10+d;
        num=num/10;
     }
     if(num1==rev)
        printf("number is palindrome");
     else
        printf("number is not palindrome");
}