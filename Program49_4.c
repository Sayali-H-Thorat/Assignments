//Problem Statement: Write a program which checks whether 7th,8th and 9th bit is ON or OFF
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
/*
0000 1000 0001 0010 0100 0001 1100 0000
0     0     0   0    0    1    C    0
000001C0 Hexadecimal No
0X000001C0
*/
bool CheckBit(UINT iNo)
{
    UINT iMask = 0X000001C0;
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
        printf("7th,8th and 9th bit is ON\n");
    }
    else
    {
        printf("7th,8th and 9th bit is OFF\n");
    }

    return 0;
}