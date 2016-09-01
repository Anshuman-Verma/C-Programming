#include<stdio.h>

int main()
{
int row,col,i,j;
printf("Input Matrix Rows\n");
scanf("%d",&row);

printf("Input Matrix Column\n");
scanf("%d",&col);

int M[row][col];

printf("Input Matrix Elements\n");

for( i=0; i<row; i++)
	{ 
		for( j=0; j<col; j++){
		scanf("%d" ,&M[i][j]);	
		}
	}
printf("The Matrix Obtained is:\n");
for(i=0; i<row; i++)
	{ 
		for(j=0; j<col; j++){
		printf("%d",M[i][j]);
		printf(" ");
		}	
	printf("\n");
	}
return 0;
}
