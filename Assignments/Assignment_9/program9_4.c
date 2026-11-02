#include <stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    // Handle negative input
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Multiply all odd numbers down to 1
    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if (iCnt % 2 != 0)
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n", iRet);

    return 0;
}