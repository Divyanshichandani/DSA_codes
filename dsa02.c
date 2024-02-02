/*waf which accepts two values, the first one is address of a float array of size 10
and second an integer k and the function retuens the value stores at index k of the passed array*/

#include<stdio.h>
float dsaday2(int , float* b);
int main()
{
    float arr[10]={5.1,40.56,5.3,4.8,4.4,1.2,1.3,1.5,1.7,1.9};
     float index;
     int value=1;
    index=dsaday2(value,arr);
    printf("value at index %d is %f.",value,index);
}
float dsaday2(int p, float *b)
{
    return *(p+b);
}