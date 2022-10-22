#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    double x1,y1,x2,y2,x3,y3,slope1,slope2;
    scanf("%lf,%lf",&x1,&y1);                                 //scanning of point x1,y1
    scanf("%lf,%lf",&x2,&y2);                                 //scanning of point x2,y2
    scanf("%lf,%lf",&x3,&y3);                                 //scanning of point x3,y3
    slope1=(y2-y1)/(x2-x1);
    slope2=(y3-y1)/(x3-x1);
    if(slope1==slope2)                                      //checking weather the slope is equal or not
    {
        printf("All 3 points lie on the same line");        //print if on the same line
    }
    else
    {
        printf("All 3 points do not lie on the same line"); //print if not on the same line
    }
}
