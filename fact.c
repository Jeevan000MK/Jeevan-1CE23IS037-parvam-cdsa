#include<stdio.h>
int main()
{
    int n;
    long fact=1;
    scanf("%d",&n);
    for(int i=2;i<=n;fact*=i++);
    printf("%ld",fact);
    return 0;

}

long fact(int no){
    if(no<=1)return (long)1;
    return no*fact(no-1);
}