	//Find Length Of 2D Array.

#include<stdio.h>
main()
{
	int i,j,x,z=0,a[70][70];
	
	printf("Enter Tha Row Colum Size Of Array := ");
	scanf("%d",&x);	
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	
	printf("\nXXXXXXXXXXXXXXXXXXXXXXXX Array XXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("%d ",a[i][j]);
			z++;
		}
		printf("\n");
		
	}
	printf("\nXXXXXXXXXXXXXXXXXXXXXXXXX Array Length XXXXXXXXXXXXXXXXXXXXXXXXXX\n\n");
	printf("Your Arrey Length is := %d",z);
	
}