#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    // Handle negative input
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Multiply all even numbers down to 2
    for (iCnt = iNo; iCnt >= 2; iCnt--)
    {
        if (iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n", iRet);

    return 0;
}