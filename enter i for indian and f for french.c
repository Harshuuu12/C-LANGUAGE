#include<stdio.h>
void indian();
void french();

int main()
{
	char ch;
	printf("enter i for indian and f for french");
	scanf("%c",&ch);
	
	if(ch=='i')
	{
		printf("indian");
	}
	else if(ch=='f')
	{
		printf("french");
	}
	else
	{
		printf("enter i or f");
	}

	return 0;
}

void indian()
{
	printf("i am from indian");
}
void french()
{
	printf("i am from french");
}
