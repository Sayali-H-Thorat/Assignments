//Problem Statement: Write a program which checks whether 7th,15th,21st and 28th bit is ON or OFF
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
/*
0000 1000 0001 0000 0100 0000 0100 0000
0     8     1   0    4    0     4   0
 08124040 Hexadecimal No
0X08104040
*/
bool CheckBit(UINT iNo)
{
    UINT iMask = 0X08104040;
    UINT Result = 0;

    Result =iNo&iMask; 

    if(Result == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    UINT Value = 0;
    bool bRet = false;

    printf("Please enter the number :\n");
    scanf("%d", &Value);

    bRet = CheckBit(Value);

    if(bRet == true)
    {
        printf("7th,15th,21st and 28th bit is ON\n");
    }
    else
    {
        printf("7th,15th,21st and 28th bit is OFF\n");
    }

    return 0;
}