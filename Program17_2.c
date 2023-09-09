//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept N numbers from user and return the smallest number
//
//Input: N :6
//Elements : 85 6 3 66 93 88
//Output: 3
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Minimum()
// Description :      Accept number from user and return the smallest number
// Input :            Array of Integer
// Output :           Smallest number from array(Integer)
// Author :           Sayali Hanumant Thorat
// Date :             09/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Minimum(int Arr[], int iLength)
{
    int iCnt= 0;
    int iMin = Arr[0];
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
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

    iRet = Minimum(p, iSize);

    printf("Smallest number is : %d\n", iRet);

    free(p);
}