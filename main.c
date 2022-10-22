/*#include <stdio.h>
#include <stdlib.h>
void average_of_elements(double a[], int);
void average_of_elements(double a[] , int size)
{
    int l_v;
    double average;
    for(l_v=0 ; l_v<size ; l_v++)
    {
        average=(average + a[l_v]);     //finding the sum of all the entered elements under array and it is divided by its size after for loop
    }
    average=(average/size);         //dividing by size to find the average
    //Note:- here implicit typecasting is done on size by compiler
    printf("Average = %lg",average);
}

int main()
{
    int size,l_v;                       //l_v=loop variable
    scanf("%i",&size);

    if(size<1 || size>100)              //size constraint
    {
        printf("Error! number should in range of (1 to 100).");
    }

    else
    {
        double a[size];

        for(l_v=0 ; l_v<size ; l_v++)
        {
            scanf("%lf",&a[l_v]);           //scanning the value with array
        }
        average_of_elements(a , size);
    }
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
void average_of_elements(void);
void average_of_elements(void)
{
    int size,l_v;                       //l_v=loop variable
    scanf("%i",&size);

    if(size<1 || size>100)              //size constraint
    {
        printf("Error! number should in range of (1 to 100).");
    }

    else
    {
        double a[size],average=0;

        for(l_v=0 ; l_v<size ; l_v++)
        {
            scanf("%lf",&a[l_v]);           //scanning the value with array
        }

        for(l_v=0 ; l_v<size ; l_v++)
        {
            average=(average + a[l_v]);     //finding the sum of all the entered elements under array and it is divided by its size after for loop
        }

        average=(average/size);         //dividing by size to find the average
        //Note:- here implicit typecasting is done on size by compiler
        printf("Average = %.2lf",average);

    }
}

int main()
{
    average_of_elements();                  //calling the void function
    return 0;
}
