	//Perform Anti-Diagonal Sum Of 2D Array.
#include<stdio.h>
main()
{
	int a[100][100],n,i,j,sum=0;
	
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
			if((i+j)==n-1)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("\nXXXXXXXXXXXXXXXXXX  Anti Diagonal Sum  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("Sum Is := %d",sum);
}
