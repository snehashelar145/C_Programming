#include <stdio.h>

void FactRev(int iNo)
{
    if (iNo < 0) {
        iNo = -iNo;
    }
    
    //Logic to traverse backwards from iNo/2
    for (int i = iNo / 2; i >= 1; i--)
    {
        if (iNo % i == 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: \n");
    scanf("%d", &iValue);
    
    FactRev(iValue);
    
    return 0;
}