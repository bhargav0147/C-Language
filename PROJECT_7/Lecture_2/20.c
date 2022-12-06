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
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
			printf("\n");
	}	
	
}
/*
	10101
	 1010
	  101
	   10
	    1
*/