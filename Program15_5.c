//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept N numbers from user and accept one another number as NO and return frequency of No from it
//
//Input:  N:6
//NO :66
//Elements:  85 66  3   66 93  88
//Output: 2
//
//Input:  N:6
//NO : 12
//Elements:  85 11  3   15  11 111
//Output:0
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Frequency()
// Description :      Accept N numbers from user and take another no and display frequency of that number
// Input :            Array of Integer
// Output :           frequency of number(Integer)
// Author :           Sayali Hanumant Thorat
// Date :             09/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength, int iNo)
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
    return iFrequency;
}

int main()
{
    int iCnt = 0, iSize = 0, iRet = 0, iValue = 0;
    int *p = NULL;

    printf("Enter the number of array elements:\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the %d array elements:\n", iSize);
    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    printf("Enter the number to find out the frequency:\n");
    scanf("%d", &iValue);

    iRet = Frequency(p, iSize,iValue);

    printf("Frequency count of %d number is : %d", iValue, iRet);

    free(p);

    return 0;
}