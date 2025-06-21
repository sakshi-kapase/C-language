#include<stdio.h>
int main()
{
    float r,a;
    printf("Enter radius =");
    scanf("%f",&r);

    const float pi=3.14;
    a=pi*r*r;
    printf("Area of circle =%f",a);
    return 0;
}