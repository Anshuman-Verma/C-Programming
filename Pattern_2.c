#include<stdio.h>

int main()
{
	printf("Enter Number of Columns! \n");
	int A;
	scanf("%d",&A);
	int i = A;
	
	while(i>0)
		{ int j = i;
			while(j>=1)
			{
				printf("*");
				j--;
				}
		i--;
		printf("\n");	
		}	
	
	
		
	
return 0;
}
