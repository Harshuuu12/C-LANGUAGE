#include<stdio.h>
int sum (int a,int b);

int main()
{
	int a,b,c;
	printf("enter the value of a");
	scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    
    c=a-b;
    printf("the value of c is %d",c);
	return 0;
}

int sum(int a,int b)
{
	return a-b;
}

