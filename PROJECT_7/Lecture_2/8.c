#include<stdio.h>
main()
{
	int c,r,k;
	for(c=1;c<=5;c++)
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
	12345
	 2345
	  345
	   45
	    5
*/