		//Perform Cross-Diagonal Sum Of 2D Array.
#include<stdio.h>
main()
{
	int a[100][100],n,i,j,sum=0,sum1=0;
	
	printf("Enter The Size Of Arrey := ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{	
		
		for(j=0;j<n;j++)
		{
			
		if(i==j)
	    	{
			 	sum=sum+a[i][j];
		    }
		
		if((i+j)==n-1)
			{
				sum1=sum1+a[i][j];
			}
		}
	}
	printf("\n Diagonal %d =\n",sum);
	
	printf("\n Anti Diagonal %d =\n",sum1);
		
	printf("\n Cross Diagonal %d =\n",sum+sum1);
}
