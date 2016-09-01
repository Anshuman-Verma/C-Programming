#include<stdio.h>

int main()
{
	printf("Enter Number of Columns! \n");
	int A,i=1;
	scanf("%d",&A);
	
	while(i<=A)
		{ int j = 1;
		
		 int x = A-i;
			while(x>=0){
				printf(" ");
				x--;
			}
		
		
		
			while(j<=i)
			{
				printf("*");
				j++;
				}
		i++;
		printf("\n");	
		}	
	
	
		
	
return 0;
}
