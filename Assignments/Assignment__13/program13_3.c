#include<stdio.h>

int CountRange(int iNo)
{
    int iCount = 0;
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        // Check if digit is strictly between 3 and 7 (i.e., 4, 5, or 6)
        if((iDigit > 3) && (iDigit < 7))
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    iRet = CountRange(iValue);
    
    printf("%d", iRet);
    
    return 0;
}