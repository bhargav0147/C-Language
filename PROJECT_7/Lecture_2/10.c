#include<stdio.h>
main()
{
	int c,r,k;
	for(c=5;c>=1;c--)
	{
		for(k=4;k>=c;k--)
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
	54321
	 4321
	  321
	   21
	    1
*/