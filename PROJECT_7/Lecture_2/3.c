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
		for(r=c;r<=5;r++)
		{
			printf("%d",r);
		}
			printf("\n");
	}	
	
}
/*
	    5
	   45
	  345
	 2345
	12345
*/