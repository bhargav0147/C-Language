	// Remove Space & Blanks In String

#include<stdio.h>
#include<string.h>
main()
{
	int i,j,n=0,count=0;
	char a[100];
	
	printf(" Enter Your String Word := ");
	gets(a);
	
	n=strlen(a);
	
	for (i=0;i<n;i++)
	{
		
		if(a[i]!=' ')
		{
			printf("%c",a[i]);
		}
	}
	
	
}