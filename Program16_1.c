//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept N numbers from user and accept one another number as NO and check whether NO is present or not
//
//Input: N :6
// NO : 66
//Elements : 85 6 3 66 93 88
//Output: TRUE
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
 
typedef int BOOL; 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Check()
// Description :      Accept number from user and accept another number and check it is pesent or not
// Input :            Array of Integer and another number
// Output :           No is Present or Not(Integer)
// Author :           Sayali Hanumant Thorat
// Date :             09/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }       
    }
    if(iFrequency == 0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    int iCnt = 0, iRet = 0, iValue = 0, iSize =0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter the number of array elements :\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter %d elements :\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    printf("Enter the number to check :\n");
    scanf("%d", &iValue);

    bRet = Check(p, iSize, iValue);
    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);

    return 0;
}