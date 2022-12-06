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
			printf("%d",c);
		}	
			printf("\n");
	}
}
/*
	    5
	   44
	  333
	 2222
	11111
*/