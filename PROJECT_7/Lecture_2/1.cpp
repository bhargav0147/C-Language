#include<stdio.h>
main()
{
	int c,r,k;
	for(c=-5;c<=5;c++)
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
	    1
	   12
	  123
	 1234
	12345
*/
