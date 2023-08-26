//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept N numbers from user and accept one another number and return the index of first occurence of that no 
//
//Input: N :6
// NO : 66
//Elements : 85 66 3 66 93 88
//Output: 1
//
//Input: N :6
// NO : 12
//Elements : 85 11 3 15 11 111
//Output: -1
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     FirstOccurrence()
// Description :      Accept number from user and accept another number and return index of first occurence
// Input :            Integer
// Output :           index of first occurence(Integer)
// Author :           Sayali Hanumant Thorat
// Date :             09/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FirstOccurrence(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
           break;
        }
    }
    return iCnt;

}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter the number array elements:\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the %d array elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }
    printf("Enter the number to find out First occurence index:\n ");
    scanf("%d", &iValue);

    iRet = FirstOccurrence(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First Occurence of %d number is at index: %d",iValue, iRet);
    }

    free(p);

    return 0;

}