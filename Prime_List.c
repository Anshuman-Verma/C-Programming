#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{	
	printf("Enter the Number ! \n");
	int A,x,i=2;
	scanf("%d",&A);
	printf("Prime Factors are:\n");
	while(i<=A-1)
		{ int p=2,temp =0;
		if(A%i==0)	
			{ while(p<=sqrt(i))
				{  
				    if(i%p==0)
						{ temp++; }
					p++;
				 }
				 
			if(temp==0)
			{ printf("%d \n",i);}
				 
			  }
			i++;
		}
return 0;
	
}

