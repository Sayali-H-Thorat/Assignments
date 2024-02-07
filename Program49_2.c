//Problem Statement: Write a program which checks whether 5th and 18th bit is ON or OFF
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
/*
0000 0000 0000 0010 0000 0000 0001 0000
 0    0   0      2   0    0     1    0
00020010 Hexadecimal No
0X00020010
*/
bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00020010;
    UINT Result = 0;

    Result =iNo & iMask; 

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
        printf("5th and 18th bit is ON\n");
    }
    else
    {
        printf("5th and 18th bit is OFF\n");
    }

    return 0;
}