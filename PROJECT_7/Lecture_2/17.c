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
	    1
	   10
	  101
	 1010
	10101
*/
