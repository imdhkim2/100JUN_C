#include <stdio.h>
int main(){
    int a,b,t,i;
    scanf("%d",&t);
    for ( i = 0; i<t; i++)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }  
}