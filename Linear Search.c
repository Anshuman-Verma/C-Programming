#include<stdio.h>

int main()
{
int n;
printf("Enter Array Length\n");
scanf("%d",&n);

int A[n];
int i,max=0,min=10;

printf("Enter Array Elements\n");
for(i=0;i<n;i++)
    {
    scanf("%d",&A[i]);

    if(A[i]<min){min=A[i];}

    else if(A[i]>max){max=A[i];}
    }

printf("Smallest And Largest Array Elements are %d & %d respectively",min,max);

return 0;
}
