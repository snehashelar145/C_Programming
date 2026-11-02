#include <stdio.h>

#define SQFT_TO_SQM 0.0929

double SquareMeter(int iValue)
{
    double dMeter = 0.0;
    dMeter = iValue * SQFT_TO_SQM;
    return dMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meters is: %lf\n", dRet);

    return 0;
}