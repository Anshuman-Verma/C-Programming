#include<stdio.h>

int main()
{
printf("Input Array Length\n");
int n,i,j,temp;
scanf("%d",&n);

printf("Input Array Elements\n");
int A[n];
for(i=0;i<n;i++)
	{scanf("%d",&A[i]);}

//Bubble Sort

for(i=n-1;i>=0;i--)
	{
	for(j=n-1;j>=i-j;j--)
		{
		if(A[j]<A[j-1])
			{
			temp = A[j];
			A[j] = A[j-1];
			A[j-1] = temp; 			
			}
		}
	}

printf("Sorted Array:\n");
for(i=0;i<n;i++)
	{printf("%d",A[i]);}

return 0;
}
