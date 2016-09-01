#include<stdio.h>
#include<conio.h>


int main()
{	
	int a=0,b=1,c,n,i=2;
	
	printf("Enter Number of Terms in Series !\n");
	scanf("%d",&n);
	
	printf("%d\n%d\n",a,b);
	
	
	
	
	
		while(i<=n-1)
			{ c = a + b;
			  a = b;
			  b = c;
		  	   printf("%d\n",c);
				 i++; }
	
	
return 0;
}
