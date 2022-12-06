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
	 0101
	  101
	   01
	    1
*/