#include <stdio.h>
int main(void){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int d = (a+b)%c;
    int e = ((a%c + (b%c))%c);
    int f =  (a*b)%c;
    int g = (((a%c) * (b%c))%c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
    printf("%d\n",g);
}