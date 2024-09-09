#include <stdio.h>
int main(void){
    int a,b,result;
    scanf("%d",&a);
    scanf("%d",&b);
    int c = a*(b%10);
    int d = a*((b%100)/10);
    int e = a*(b/100);
    int f = a*b;
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
}