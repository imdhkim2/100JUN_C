#include <stdio.h>
int main(){
    int a,b,c,t,i;
    scanf("%d",&t);
    for ( i = 0; i<t; i++)
    {
        scanf("%d %d",&a,&b);
        c = a+b;
        printf("Case #%d: %d + %d = %d\n",i+1,a,b,c);
    }  
}