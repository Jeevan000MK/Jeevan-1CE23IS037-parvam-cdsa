#include<stdio.h>
void foo();
void bar(int );

int main()
{
    void (*q)()=&bar;
    printf("Start of Main\n");
    q();
    foo(12);
    foo(1);
    q();
    printf("\nend of Main\n");
    return 0;
}
void foo()
{
    printf("\nfoo func\n");
}
void bar(int x){
    printf("\nbar func %d\n",x);
}