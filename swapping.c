#include<stdio.h>
int main()
{
	int a=20;
	int b=10;
	int c;
	
	printf("before swapping value of a %d",a);
	printf("\nbefore swapping value of b %d",b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\nafter swapping value of a %d",a);
	printf("\nafter swapping value of b %d",b);
	
	
	return 0;
}
