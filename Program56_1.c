//Problem Statement: Write a recursive program which accept string from user and count white spaces.
//
//Input:He llo Wo r ld
//
//Output: 4
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str == ' ' )
        {
            iCnt++;
        }
        str++;
        WhiteSpace(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = WhiteSpace(Arr);

    printf("White spaces are : %d\n",iRet);

    return 0;
}