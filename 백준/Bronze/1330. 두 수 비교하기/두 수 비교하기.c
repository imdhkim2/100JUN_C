#include <stdio.h>
int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        printf(">");
    }
    else if (a<b)
    {
        printf("<");
    }
    else
    {
        printf("==");
    }   
}