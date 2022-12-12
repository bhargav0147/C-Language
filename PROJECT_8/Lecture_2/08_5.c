	//Perform Row-Wise Sum Of 2D Array

#include<stdio.h>
main()
{
	int i,j,x,z=0,a[70][70],sum=0;
	
	printf("Enter Tha Row Colum Size Of Array := ");
	scanf("%d",&x);	
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	
	printf("\nXXXXXXXXXXXXXXXXXXXXX Array  XXXXXXXXXXXXXXXXXXXXXXXXX\n\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");	
	}
	printf("\nXXXXXXXXXXXXXXXXXXXXXXXX Array Row Wise Sum  XXXXXXXXXXXXXXXXXXXXXXXX\n\n");
	for(i=0;i<x;i++)
	{
		sum=0;
		for(j=0;j<x;j++)
		{
			sum=sum+a[i][j];
			
		}
		printf("%d\n",sum);
		printf("\n");
		
	}
}