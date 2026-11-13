#include <stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    if (iStart > iEnd) 
    {
        printf("Invalid range\n");
        return;
    }
    
    for (int i = iStart; i <= iEnd; i++) 
    {
        printf("%d\t", i);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter starting point: ");
    scanf("%d", &iValue1);
    
    printf("Enter ending point: ");
    scanf("%d", &iValue2);
    
    RangeDisplay(iValue1, iValue2);
    
    return 0;
}