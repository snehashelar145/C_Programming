#include <stdio.h>

int FactDiff(int iNo)
{
    int iFactSum = 0;
    int iNonFactSum = 0;
    
    if (iNo < 0) {
        iNo = -iNo;
    }
    
    //One loop to evaluate both conditions up to iNo - 1
    for (int i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            iFactSum = iFactSum + i;
        }
        else
        {
            iNonFactSum = iNonFactSum + i;
        }
    }
    
    return iFactSum - iNonFactSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number: \n");
    scanf("%d", &iValue);
    
    iRet = FactDiff(iValue);
    
    printf("%d\n", iRet);
    
    return 0;
}