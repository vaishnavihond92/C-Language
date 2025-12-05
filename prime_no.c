#include<stdio.h>
void main()
{
   int num,i;
   printf("enter number :");
   scanf("%d",&num);
   
   for(i=2; i<num; i++)
    {
        if(num%i==0)
        break;
    }
   if(i==num) 
     {
        printf("prime number");
     }
   else
     {
        printf("not prime number");
     }  
}