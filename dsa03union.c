#include<stdio.h>
union myU
{
    int f;
};
union A
{
    int a;
    float b;
    char c[4];
};
int main()
{
    union A  myU;
    myU.a=14;
    printf("%d\n",myU.a);
    myU.b=7;
    printf("%d\n",myU.a);
}