#include<stdio.h>

int main()
{
char ch;
scanf("%c",&ch);

while(ch!='q')
	{
	int a,b,n;
	scanf("%d%d%d",&a,&b,&n);

	switch(n)
		{
		case 1: printf("Sum is: %d",a+b);
			break;

		case 2: printf("Difference is: %d",a-b);
			break;

		case 3: printf("Product is: %d",a*b);
			break;
		
		case 4: printf("Division is: %d",a/b);		
			break;

		default: printf("INVALID !!!");
		}
	scanf("%c",&ch);
	}


return 0;
}
