	//Get & Print 2D Array Of N Elements.

#include<stdio.h>
main()
{
	int i,j,x,a[70][70];
	
	printf("Enter Tha Row Colum Size Of Array := ");
	scanf("%d",&x);	
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nXXXXXXXXXXXXXXXXXXXXXXXX Array XXXXXXXXXXXXXXXXXXXXXXXXXX\n\n");
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}