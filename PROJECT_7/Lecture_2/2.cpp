#include<stdio.h>
main()
{
	int c,r,k;
	for(c=1;c<=5;c++)
	{
		for(k=c;k<=5;k++)
		{
			printf(" ");
		}
		for(r=c;r>=1;r--)
		{
			printf("%d",r);			
		}
		printf("\n");
	}
}
/*
	    1
	   21
	  321
	 4321
	54321
	
*/