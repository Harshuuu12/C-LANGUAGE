#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	
	printf("before swapping value of a %d",a);
	printf("\n before swapping value of b %d",b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n after swapping value of a %d",a);
	printf("\n after swapping value of b %d",b);
	
	return 0;
}
