#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;              //d= days a person is late in returning the book
    printf("enter number of days person is late\n");
    scanf("%i",&d);
    if(d<=0)
    {
        printf("you are not late in returning the book no fine");
    }
    else if(0<d&&5>=d)                                              //the first 5 days
    {
        printf("your fine is Rs. 0.50");
    }
    else if(6<=d&&10>=d)                                            //for 6-10
    {
        printf("your fine is Rs. 1.00");
    }
    else if(10<d&&30>=d)                                            //10 days to 30 days
    {
        printf("your fine is Rs. 5.00");
    }
    else                                                            //after 30 days
    {
        printf("your membership will be cancelled");
    }
        return 0;
}
