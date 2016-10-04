#include<stdio.h>

int main()
{

int n;
printf("Enter Array Length: ");
scanf("%d",&n);

printf("Enter Array Elements");
int A[n],i,j,temp[n];
for(i=0;i<n;i++)
	{
	scanf("%d",&A[i]);
	temp[i]=A[i];
	}

int count=0;

for(i=0;i<n;i++)
	{ count =0;
	if(temp[i]!=0)
	  {	for(j=0;j<n;j++)
		 {	
			{
			if(A[i]==A[j])
				{
				count++;
				temp[j]=0;
				}
			}
		}
printf("Frequency of %d is %d\n",A[i],count);
	}  }
return 0;
}
