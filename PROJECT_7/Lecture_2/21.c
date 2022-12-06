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
			if(c%2==0)
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
	11111
	 0000
	  111
	   00
		1
*/