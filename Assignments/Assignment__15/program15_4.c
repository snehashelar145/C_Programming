#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;
    
    //If all three numbers are 0
    if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        return 0;
    }
    
    //Multiply only non-zero values
    if(iNo1 != 0)
    {
        iMult = iMult * iNo1;
    }
    if(iNo2 != 0)
    {
        iMult = iMult * iNo2;
    }
    if(iNo3 != 0)
    {
        iMult = iMult * iNo3;
    }
    
    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
    
    printf("Please enter three numbers : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);
    
    iRet = Multiply(iValue1, iValue2, iValue3);
    printf("Multiplication is : %d", iRet);
    
    return 0;
}