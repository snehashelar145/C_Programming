#include <stdio.h>

int MultFact(int iNo)
{
    int iMult = 1;
    
    //Updater for negative numbers
    if (iNo < 0) {
        iNo = -iNo;
    }
    
    //Case for 0
    if (iNo == 0) {
        return 0;
    }
    
    //Logic
    for (int i = 1; i <= iNo / 2; i++)
    {
        if (iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }
    
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number: \n");
    scanf("%d", &iValue);
    
    iRet = MultFact(iValue);
    
    printf("%d\n", iRet);
    
    return 0;
}