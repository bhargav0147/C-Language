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
		for(r=1;r<=c;r++)
		{
			printf("%d",r);			
		}
		printf("\n");
	}
}	
/*
	12345
	 1234
	  123
	   12
	    1
*/