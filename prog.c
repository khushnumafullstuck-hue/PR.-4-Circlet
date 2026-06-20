#include<stdio.h>

	
    // *     *
    // *   *
    // * *
    // *   *
    // *     *

int main()
{
	int i, j, k;
	
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==1)
			{
				printf("* ");
			}
			else
			{
				printf("");
			}
		}
		for(k=2; k>=i; k--)
		{
			printf("  ");
		}
		for(j=i; j>=1; j--)
		{
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
	
	for(i=1; i<=2; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==1)
			{
				printf("*");
			}
			else
			{
				printf("");
			}
		}
		for(k=1; k>=2; k--)
		{
			printf("  ");
		}
		for(j=1-i; j<=2; j++)
		{
			if(j==1)
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
	
	return 0;
}

