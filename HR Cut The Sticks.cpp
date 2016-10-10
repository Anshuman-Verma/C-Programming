#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n],max=0;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
        if(max<arr[arr_i])
            {max=arr[arr_i];}
    }
    
    int count = n,same=1;
    while(count!=0)
        {
        	if(same!=0)
	          {
			  printf("%d\n",count);
				}
				
  		  same=0;
  		  
        for(int arr_i = 0; arr_i < n; arr_i++)
            {
            if(arr[arr_i]==0)
                {continue;}
            
            arr[arr_i]--;
            if(arr[arr_i]==0)
                {same++;}
               
                
            }
            count-=same;
    }
        
 
    return 0;
}

