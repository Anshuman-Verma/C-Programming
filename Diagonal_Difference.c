#include <stdio.h>


int main(){
    int n,p=0,s=0; 
    scanf("%d",&n);
    int a[n][n];
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
          
          scanf("%d",&a[i][j]);
           if(i==j)
               {p += a[i][j];}
           
           if(i+j==n-1)
               {s += a[i][j];}
       }
    }
    if(s-p>0)
    {printf("%d",s-p);}
    
    else printf("%d",p-s);
    return 0;
}
