#include<stdio.h>
int main()
{
    int a=9,b=-99;
    scanf("%d%i",&a,&b);
    if(a%b==0)
        printf("divisible");
    else
        printf("not divisible");
    return 0;
}
