#include<stdio.h>
main()
{
	int c,r,k;
	for(c='E';c>='A';c--)
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
}	
/*
	ABCDE
	 ABCD
	  ABC
	   AB
	    A
*/