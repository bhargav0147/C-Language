	// create calc using Nested Function.
	
#include<stdio.h>
void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void dev(int a, int b);
main()
{
	int a,b;
	
	printf(" Enter The Value For Count := ");
	scanf("%d%d",&a,&b);
	
	add(a,b);
}
void add(int a, int b)
{
	int c=a+b;
	printf("Addition Is := %d\n",c);
	sub(a,b);
}
void sub(int a, int b)
{
	int c=a-b;
	printf("Sub Is := %d\n",c);
	mul(a,b);
}
void mul(int a, int b)
{
	int c=a*b;
	printf("Multiple Is := %d\n",c);
	dev(a,b);
}
void dev(int a, int b)
{
	int c=a/b;
	printf("Devision Is := %d\n",a/b);
}