#include<stdio.h>
#include<conio.h>


int main()
{
printf("Enter Start Number!");
int n;
	scanf("%d",&n);
	
printf("Enter End Number!");
int p;
	scanf("%d",&p);

	while(n<p)
	{
	    int i=2,count=0;
	    while(i<=n/2)
	    { 
		if(n%i==0)
		{ count++; }
		
		i++;
		}
	if(count==0)
	{ printf("%d \n",n); }

	n++;
	  }
	  
	  
getch();
return 0;
}




