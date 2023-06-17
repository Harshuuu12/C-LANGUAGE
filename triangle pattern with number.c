#include<stdio.h>
int main()
{
	int a,i,rows;
	printf("enter the number of rows");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(a=1;i>=a;a++)
			printf("%d  ",a);
			printf("\n");
	    
	}
	
	return 0;
}
