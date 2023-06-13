#include<stdio.h>
int main()
{
	int menu,choice=6,i,qty,total,totalamt,n;
	char ch;
   do 
   {
MENU:	
	printf("******MENU*******");
	printf("\n BURGER=50");
	printf("\n PIZZA=90");
	printf("\n FRENCH FIRES=60");
	printf("\n COLD DRINK=20");
	printf("\n FRAINKIE=55");
	printf("\n ICE CREAM=30");
	printf("\n *****ENTER YOUR ORDER*****");
	scanf("%d",&choice);

	switch(choice)
	case 1:
		{
			printf("\n SELECTED YOUR BURGER");
			printf("\n ENTER THE QUANTITY");
			scanf("%d",&qty);
			for(i=1;i<=qty;i++)
			{
				total=qty*50;
			}
			printf(" AMOUNT =:%d",total);
			break;
		
	    case 2:
		
			printf("\n SELECTED YOUR PIZZA");
			printf("\n ENTER THE QUANTITY");
			scanf("%d",&qty);
			for(i=1;i<=qty;i++)
			{
				total=qty*90;
			}
			printf(" AMOUNT =:%d",total);
			break;
		
		case 3:
		
			printf("\n SELECTED YOUR FRENCH FIRES");
			printf("\n ENTER THE QUANTITY");
			scanf("%d",&qty);
			for(i=1;i<=qty;i++)
			{
				total=qty*60;
			}
			printf(" AMOUNT =:%d",total);
			break;
		
		case 4:
		
			printf("\n SELECTED YOUR COLD DRINK");
			printf("\n ENTER THE QUANTITY");
			scanf("%d",&qty);
			for(i=1;i<=qty;i++)
			{
				total=qty*20;
			}
			printf(" AMOUNT =:%d",total);
			break;
		
		case 5:
		
			printf("\n SELECTED YOUR FRAINKE");
			printf("\n ENTER THE QUANTITY");
			scanf("%d",&qty);
			for(i=1;i<=qty;i++)
			{
				total=qty*55;
			}
			printf(" AMOUNT =:%d",total);
			break;
		
	    case 6:
		
			printf("\n SELECTED YOUR ICE CREAM");
			printf("\n ENTER THE QUANTITY");
			scanf("%d",&qty);
			for(i=1;i<=qty;i++)
			{
				total=qty*30;
			}
			printf(" AMOUNT =:%d",total);
			break;
			 default:
        {
            printf("NOT IN MENU");
           
            break;
        }
}
	    totalamt += total;
        printf("\n TOTAL AMOUNT IS = %d", totalamt);
        printf("\n DO YOU WANT ANY ORE ORDER ? yes or no : ");
        scanf("%s", &ch);
	
}  while(ch!='n');

		if(ch=='n')
	{
		printf("\n YOUR TOTAL BILL=: %d",totalamt);
		printf("\n THANK YOU");
	}
	
	
	return 0;
}
