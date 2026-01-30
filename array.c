#include<stdio.h>
int main()
{
	int a[5],i,tot;
	float per;
	for(i=0; i<5; i++)
	{
		printf("Enter Number :");
		scanf("%d",&a[i]);
	}
	for(i=0; i<5; i++)
	{
		tot=tot+a[i];
	}
	per=tot/5;
	printf("\n Total=%d",tot);
	printf("\n Percentage=%f",per);
}
