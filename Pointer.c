#include<stdio.h>
int main()
{
    int age=22;
    int *ptr=&age;
    printf("Address of age =%d",&age);
    printf("\n%d",*ptr); // returns value at address
    printf("\n%d",ptr);
    return 0;
}