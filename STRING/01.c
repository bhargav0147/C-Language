	// Count Frequency Of Each Character In A Sharing

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
		count=1;
		for (j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				a[j]='\0';
			}
		}
		if(a[i]!='\0' && a[i]!=' ')
		{
			printf("%c = %d\n",a[i],count);
		}
	}
	
	
}