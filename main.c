#include <stdio.h>
#include <stdlib.h>

int main()
{
    double h,c,t;                               //hardness,carbon content,tensile strength respectively
    printf("enter hardness\n");
    scanf("%lf",&h);
    printf("enter carbon content\n");
    scanf("%lf",&c);
    printf("enter tensile strength\n");
    scanf("%lf",&t);
    if((h>50)&&(c<0.7)&&(t>5600))               // Hardness must be greater than 50 ii. Carbon content must be less than 0.7 iii. Tensile strength must be greater than 5600
    {
        printf("\n grade given to the steel is 10");
    }

    else if((h>50)&&(c<0.7)&&(t<5600))          // test for grade 9
    {
        printf("\n grade given to the steel is 9");
    }

     else if((h<50)&&(c<0.7)&&(t>5600))         // test for grade 8
    {
        printf("\n grade given to the steel is 8");
    }

     else if((h>50)&&(c>0.7)&&(t>5600))         // test for grade 7
    {
        printf("\n grade given to the steel is 7");
    }

     else if((h>50)&&(c>0.7)&&(t<5600))         // test for grade 6
    {
        printf("\n grade given to the steel is 6");
    }

     else if((h<50)&&(c<0.7)&&(t<5600))         // test for grade 6
    {
        printf("\n grade given to the steel is 6");
    }

     else if((h<50)&&(c>0.7)&&(t>5600))         // test for grade 6
    {
        printf("\n grade given to the steel is 6");
     }
    else                                        // test for grade 5
    {
        printf("\n grade given to the steel is 5");         //NOTE:- 5 is the lowest grade available in rating of steel
    }
}
