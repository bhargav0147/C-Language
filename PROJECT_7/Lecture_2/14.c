#include<stdio.h>
main()
{
	char c,r,k;
	for(c='A';c<='E';c++)
	{
		for(k='E';k>=c;k--)
		{
			printf(" ");
		}
		for(r='A';r<=c;r++)
		{
			printf("%c",r);			
		}
		printf("\n");
	}	
/*
	    A
	   AB
	  ABC
	 ABCD
	ABCDE
*/	
}