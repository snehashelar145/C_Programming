#include<stdio.h>

int MultDigits(int iNo)
{
    int iMult = 1;
    int iDigit = 0;
    
    // If the input is exactly 0, multiplication is 0
    if(iNo == 0)
    {
        return 0;
    }
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        // Ignore 0 so it doesn't make the whole multiplication 0
        if(iDigit != 0)  
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    iRet = MultDigits(iValue);
    
    printf("%d", iRet);
    
    return 0;
}