#include<stdio.h>

int main()
{
	int i, j, k;
	
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(i==1  || j==1 || i==3 || j==5)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	for(i=1; i<=2; i++)
	{
		for(j=1; j<=5; j++)
			if(j==1)
			{
				printf("*");
			}
			else
			{
				printf("");
			}
		}
		printf("\n");
	}
	
	return 0;
}
