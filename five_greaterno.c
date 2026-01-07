#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter 1st number :");
	scanf("%d",&a);
	printf("Enter 2nd number :");
	scanf("%d",&b);
	printf("Enter 3rd number :");
	scanf("%d",&c);
	printf("Enter 4th number :");
	scanf("%d",&d);
	printf("Enter 5th number :");
	scanf("%d",&e);
	if(a>b && a>c && a>d && a>e)
	  printf("%d is greater",a);
	if(b>a && b>c && b>d && b>e)
	  printf("%d is greater",b);
	if(c>a && c>b && c>d && c>e)
	  printf("%d is greater",c);
	if(d>a && d>b && d>c && d>e)
	  printf("%d is greater",d);
	else
	  printf("%d is greater",e);
}
