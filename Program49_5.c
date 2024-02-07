//Problem Statement: Write a program which checks whether 1st and last bit is ON or OFF. First bit means bit number 1 and last bit means bit number 32
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
/*
0000 1000 0001 0010 0100 0001 1100 0000
   8  0     0   0    0    0    0    1
800000001 Hexadecimal No
0X800000001
*/
bool CheckBit(UINT iNo)
{
    UINT iMask = 0X800000001;
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
        printf("1st and last bit is ON\n");
    }
    else
    {
        printf("1st and last bit is OFF\n");
    }

    return 0;
}