#include<stdio.h>
void main()
{
   int CP,SP,P,L;
   printf("Enter Cost Price :");
   scanf("%d",&CP);
   printf("Enter Selling Price :");
   scanf("%d",&SP);
   if(CP<SP)
     { 
       P=CP-SP;
       printf("%d seller made profit",P);
     }
   else if(SP<CP)
     {
       L=SP-CP;
       printf("%d seller made loss",L);
     }
}