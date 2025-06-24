#include<stdio.h>
int SquareArea(int side);
int Rectanglearea(int l,int b);
float CircleArea(float r);
int main()
{
    int side;
    printf("Enter a side =");
    scanf("%d",&side);
    printf("Square area =%d",SquareArea(side));
    printf("\nRectangle area =%d",Rectanglearea(4,5));

    printf("\nCircle area =%f",CircleArea(2.0));

    return 0;
}

int SquareArea(int side)
{
    return side*side;
}
int Rectanglearea(int l,int b)
{
    return l*b;
}
float CircleArea(float r)
{
    return 3.14*r*r;
}