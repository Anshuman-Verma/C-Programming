#include<stdio.h>
#include<conio.h>

int BinaryConvert(int num)
{	int a,b=1,sum=0;
	
	while(num>0)
		{ a = num%10;
		  sum = sum + a*b;
		  b = b*2;
		  num = num/10;
		  
		   }
	return sum;
}


int main()
{	
	printf("Enter Binary! \n");
	int A,x;
	scanf("%d",&A);
	
	x = BinaryConvert(A);
	printf("Decimal Conversion is:%d",x);

getch();
return 0;
}
