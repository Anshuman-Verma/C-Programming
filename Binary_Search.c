#include<stdio.h>

void main()
{
	
int n,i,j,m;
scanf("%d",&n);

int A[n];
for( i=0;i<n;i++)
	{
	scanf("%d",&A[i]);
	}
	
int x;
scanf("%d",&x);

i=0,j=n-1;
while(i<j)
	{
	m = (i+j)/2;
	
	if(x>A[m])
		{
		i=m+1;
		}	
	else 
		{
		j=m;
		}		
	}
if(x==A[i]){printf("%d",i);}
else printf("0");

}
