#include<stdio.h>
main()
{
	int c,r,k;
	for(c=5;c>=1;c--)
	{
		for(k=1;k<=c;k++)
		{
			printf(" ");
		}
		for(r=5;r>=c;r--)
		{
			printf("%d",r);			
		}
		printf("\n");
	}
}	
/*
	    5
	   54
	  543
	 5432
	54321
*/	
