#include<stdio.h>
int main()
{
    int no,n,sum=0,rem;
    printf("Enter a no=");
    scanf("%d",&no);
    n=no;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }

    if(sum==no)
    {
        printf("This is armstrong no");
    }
    else
    {
        printf("Not a armstrong");
    }
}