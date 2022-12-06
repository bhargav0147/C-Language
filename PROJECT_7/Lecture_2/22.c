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
		for(r=5;r>=c;r--)
		{
			if(r%2==0)
			{
				printf("|");
			}
			else
			{
				printf("-");
			}
		}
			printf("\n");
	}	
	
}
/*
	-|-|-
	 -|-|
	  -|-
	   -|
	    -
*/