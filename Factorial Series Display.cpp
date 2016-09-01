#include<stdio.h>
#include<conio.h>


int main()
{
printf("Enter Start Number!");
int n,i;
scanf("%d",&n);



	while(n<20)
{
		int fact = 1;
		i = 1*n;
		while(i>1)
		{ fact = fact*i;
		i--;
		}
	printf("%d\t",n);
	printf("%d\n",fact);
	n++;
	  
}
getch();
return 0;
}




