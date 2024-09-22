#include <stdio.h>
int main(){
    int H,M;
    scanf("%d %d",&H,&M);
    
    if (M>=45)
    {
        M = M-45;
        printf("%d %d",H,M);
    }
    else 
    {
        M = 15+M;
        if(H == 0)
            H = 23;
        else
            H -=1;
        printf("%d %d",H,M);  
    }
   
}