#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    // Handle negative input (convert to positive)
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Print '*' iNo times
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    // Print '#' iNo times
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}