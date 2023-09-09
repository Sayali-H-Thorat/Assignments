//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept N numbers from user and return the difference between largest and smallest number
//
//Input: N :6
//Elements : 85 66 3 66 93 88
//Output: 90 (90 - 3)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Difference()
// Description :      Accept number from user and display difference between largest and smallest number
// Input :            Array of Integer
// Output :           Diffrence between largest and smallest number(Integer)
// Author :           Sayali Hanumant Thorat
// Date :             09/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int iCnt= 0;
    int iMin = Arr[0];
    int iMax = Arr[0];
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }

        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        
    }

    return iMax - iMin;
}

int main()
{
    int iRet = 0, iSize = 0, iCnt = 0;
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
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Difference between Largest and Smallest number is : %d\n", iRet);

    free(p);
}