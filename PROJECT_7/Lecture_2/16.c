#include<stdio.h>
main()
{
	int c,r,k;
	for(c='A';c<='E';c++)
	{
		for(k='A';k<=c;k++)
		{
			printf(" ");
		}
		for(r=c;r<='E';r++)
		{
			printf("%c",r);
		}
			printf("\n");
	}	
	
}
/*
	ABCDE
	 BCDE
	  CDE
	   DE
	    E
*/