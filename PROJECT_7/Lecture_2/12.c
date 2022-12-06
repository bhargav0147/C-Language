#include<stdio.h>
main()
{
	int c,r,k;
	for(c=1;c<=5;c++)
	{
		for(k=4;k>=c;k--)
		{
			printf(" ");
		}
		for(r=1;r<=c;r++)
		{
			printf("*");			
		}
		printf("\n");
	}	
/*
	    *
	   **
	  ***
	 ****
	*****
*/	
}