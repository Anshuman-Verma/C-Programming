#include<stdio.h>


int main()
{
	printf("Enter Number to be Converted !\n");
	int A,i=0;
	scanf("%d",&A);
	
	int bin[100];
	
	while(A!=0)
		{
			bin[i] = A%2;
			A = A/2;	
			i++;
		}
	
	while(i>0)
		{i--;
		printf("%d",bin[i]);
		 	}
	
return 0;
}
