#include<stdio.h>

int main()
{
int n,factor=2;
scanf("%d",&n);

printf("Prime factors Are as Follows:");
while(n!=1)
	{
	if(n%factor==0)
		{printf("%d ",factor);
		n=n/factor;
		}
	
	else factor++;
	}

printf("\n\n");

return 0;
}
