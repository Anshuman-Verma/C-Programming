#include<stdio.h>
#include<conio.h>


int palindrome(int num)
{
	int a=0;
	while(num>0)
			{ a = a*10 + num%10;
			  num = num/10; 
			}	
return a;
}

int main()
{	
	printf("Enter the Number ! \n");
	int A,x;
	scanf("%d",&A);
	
	x = palindrome(A);
	
	printf("Reverse of Entered Number is:%d",x);
	
return 0;
	
}

