#include<stdio.h>
#include<conio.h>

void display();



int main()
{
printf("Enter the Number \n");  
int a,b;
scanf("%d",&a);

for (int i=2; i<a/2; i++)
{
	if(a%i==0){b=1; break;}
}
if(b==1){printf("Number is Composite");}
else{printf("Number is Prime");}
	
getch();
return 0;
}
