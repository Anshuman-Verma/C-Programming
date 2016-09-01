#include<stdio.h>
#include<conio.h>

int Digit_Sum(int num)
{
	int a = 0;
	while(num > 0)
		{ a = a + num%10;
		  num = num/10; }

return a;
}


int main()
{	
	printf("Enter Number! \n");
	int A;
	scanf("%d",&A);
	int x = Digit_Sum(A);
	printf("Sum of Digits is:%d",x);

return 0;
}
