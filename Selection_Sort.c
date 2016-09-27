#include<stdio.h>

int main()
{
printf("Input Array Length\n");
int n,i,j,temp,min;
scanf("%d",&n);

printf("Input Array Elements\n");
int A[n];
for(i=0;i<n;i++)
	{scanf("%d",&A[i]);}

//Selection Sort

for(j=0;j<n;j++)
	{ min=10;
	for(i=j;i<n;i++)
		{ 
		if(A[i]<min)
			{min = A[i] ;
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;	
			}
		}
	
	}
		

printf("Sorted Array:\n");
for(i=0;i<n;i++)
	{printf("%d",A[i]);}

return 0;
}
