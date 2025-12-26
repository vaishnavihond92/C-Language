#include<stdio.h>
int main()
{
	int a,n,fact=1;
	printf("Enter Number :");
	scanf("%d",&n);
	for(a=1; a<=n; a++)
	{
		fact=fact*a;
	}
	printf("Factorial Of Number=%d",fact);
}
