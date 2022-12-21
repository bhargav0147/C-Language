	// Cheak Whether A String Is Palindrome Or Not

#include<stdio.h>
#include<string.h>
main()
{
	int i,j,n;
	char a[100],b[100];
	
	printf(" Enter Your String Word := ");
	gets(a);
	
	strcpy(b,a);
	strrev(a);
	
	n=strcmp(a,b);
	
	printf(" \n===================================================\n");
	
	if(n==0)
	{
		printf(" Your String is Palindrome");
	}
	else
	{
		printf(" Your String is Not Palindrome");
	}
	
	
	
	
	
}