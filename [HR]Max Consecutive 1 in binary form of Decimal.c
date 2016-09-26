#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,count=0,max1=0;
    scanf("%d",&n);


    while(n!=0){
    if(n%2==1){count++;}
        else count=0;
        n/=2;
    if(max1<count){max1=count;}

    }

    printf("%d",max1);


    return 0;
}
