#include<stdio.h>
int main()
{
	int num,sum=0,num1,d;
	printf("Enter Number :");
	scanf("%d",&num);
	num1=num;
	while(num>0)
	{
		d=num%10;
		sum=sum+d*d*d;
		num=num/10;
	}
	if(sum==num1)
	{
		printf("Number is Armstrong Number");
		if(num1%2==0)
		printf("\n Number is Even");
	else
	    printf("\n Number is Odd");
	}
	else
	    printf("\n Number is Not Armstrong");
}
