#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Function Prototype
void ArrayDisplay(double arr[], double asize);
double ArrayAverage(double arr2[], double asize);
double asize;

int main(void)
{
    double Array[7] = {0,3,6,9,12,15,18};
    
    asize = sizeof(Array)/sizeof(double);
    ArrayDisplay (Array, asize);
    
    printf("\nThe average of the array is: %f\n\n", ArrayAverage (Array, asize));
    
    return 0;
}

void ArrayDisplay(double arr[], double asize)
{
    int i;

    printf("\nThe contents of the array are:\n");
        for (i=0; i<asize; i++)
            {
                printf("%f\n", arr[i]);
            }
}

double ArrayAverage(double arr2[], double n)
{
    double sum = 0;
    int i;

    for (int i=0; i<n; i++)
        {
        sum += arr2[i];
        }
        
    return sum/asize;
}
