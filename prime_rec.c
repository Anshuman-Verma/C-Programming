#include<stdio.h>

void prime(int,int,int);

int main()
{
printf("Enter the number\n");
int n,i=2;
scanf("%d",&n);
printf("Prime Factors Are:\n");

prime(n,i,n);

return 0;
}

void prime(int n, int i,int num)
{

    if(i==num)
    {return;}
    if(n%i==0)
        {
        printf("%d\n",i);
        n=n/i;
        prime(n,i,num);
        }

    else prime(n,i+1,num);

}
