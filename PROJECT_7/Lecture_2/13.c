#include<stdio.h>
main()
{
	int c,r,k;
	for(c='A';c<='E';c++)
	{
		for(k=c;k<='E';k++)
		{
			printf(" ");
		}
		for(r=c;r>='A';r--)
		{
			printf("%c",r);			
		}
		printf("\n");
	}
}
/*
	    A
	   BA
	  CBA
	 DCBA
	EDCBA
	
*/