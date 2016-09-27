#include<stdio.h>

int main()
{
int year;
scanf("%d",&year);

if(year%100==0)
	{if(year%400)
		{
		printf("YES");
		}
	else {printf("NO");}
	}
else 
	{
	if(year%4==0)
		{printf("YES");}
	
	else printf("NO");
	}
return 0;
}
