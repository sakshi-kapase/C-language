#include<stdio.h>
int main()
{
    int day;
    printf("Enter a day no =");
    scanf("%d",&day);

    switch(day)
    {
        case 1:printf("Monday");
                break;
        case 2:printf("Tuesday");
                break; 
        case 3:printf("Wensday");
                break;
        case 4:printf("Thursday");
                break;
        case 5:printf("Friday");
                break;
        case 6:printf("Saturday");
                break;
        case 7:printf("Sunday");
                break;               
        default:printf("not a valid day no !!!!");
        break;
    }
}