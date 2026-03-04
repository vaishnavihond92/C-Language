#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter Two Numbers :");
	scanf("%d%d",&a,&b);
	printf("\n Swap two numbers using Bitwise ^ :");
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\n values of a & b after swaping :");
	printf("%d%d",a,b);
}
