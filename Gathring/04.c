	//find even and odd using return with parameter
	
#include<stdio.h>
int nul(int a);
main()
{
	int a,n;
	printf("Enter The Value Is :=  ");
	scanf("%d",&a);
	
	n=nul(a);
	if (n==0)
	{
		printf("This Number Is Even");
	}
	else
	{
		printf("This Number Is Odd");
	}	
}
int nul(int a)
{
	int n=a%2;
	return n;
}
	