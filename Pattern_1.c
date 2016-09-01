#include<stdio.h>

int main()
{
	printf("Enter Number of Columns! \n");
	int A;
	scanf("%d",&A);
	int i = A;
	while(i>=1)
		{ int j=i;
		
			while(j<A)
			{ printf(" "); j++; }
			
			j=i;
			while(j>0)
			{
				printf("*");
				j--;
						}			
		i--;	
		printf("\n");
		}

return 0;
}
