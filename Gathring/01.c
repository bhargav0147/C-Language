		 //find rate of interest using UDF
#include<stdio.h>
void rate(int a, int b);
main()
{
	int p,r;
	
	printf("Enter The Amount & Rate := ");
	scanf("%d%d",&p,&r);
	
	rate(p,r);
	
}

	void rate(int a, int b)
	{
		int c=a*b/100;
		int n=c*12;
		printf("Rate Of Interest Is := %d",n);
		
	}