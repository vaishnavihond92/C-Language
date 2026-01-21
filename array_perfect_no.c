#include<stdio.h>
int main()
{
	int n,i,j,num,sum=0;
	printf("Enter Limit :");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
	{
		printf("Enter Elements :");
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		sum=0;
		num=a[i];
		for(j=1; j<=num; j++)
		{
			if(num%i==0)
			 sum=sum+j;
		}
		if(sum==num && a[i]!=0)
		  printf("%d\t",a[i]);
	}
}
	
