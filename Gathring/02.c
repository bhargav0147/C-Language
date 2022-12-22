	// find to find circle area using no return with parameter function (3.14 * r * r)
	
#include<stdio.h>
void cir (int r);
main()
{
	int r;
	
	printf("Enter Circle Area :=  ");
	scanf("%d",&r);
	
	cir(r);
	
}

	void cir (int r)
	{
		float n=3.14*r*r;
		printf("Your Circle Radius Is := %f",n);
	}