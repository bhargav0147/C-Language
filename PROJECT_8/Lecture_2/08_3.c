	//Find Average Of 2D Array.

#include<stdio.h>
main()
{
	int i,j,x,z=0,a[70][70],sum=0;
	float y;
	printf("Enter Tha Row Colum Size Of Array := ");
	scanf("%d",&x);	
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	
	printf("\nXXXXXXXXXXXXXXXXXXXXX Array XXXXXXXXXXXXXXXXXXXXXXXXX\n\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
		
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			sum=sum+a[i][j];
			z++;	
			
		}
		printf("\n");
		
	}
	y=sum/z;
	printf("\nXXXXXXXXXXXXXXXXXXXXXXXX Array Average XXXXXXXXXXXXXXXXXXXXXXXX\n\n");
	printf("%f",y);
	
}