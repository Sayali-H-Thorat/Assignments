//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept N numbers from user and return Largest number
//
//Input: N :6
//Elements : 85 66 3 66 93 88
//Output: Largest no is :93
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Maximum()
// Description :      Accept numbers from user and return largest number from that array
// Input :            Array of Integer
// Output :           Largest number from array(Integer)
// Author :           Sayali Hanumant Thorat
// Date :             09/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Maximum(int Arr[], int iLength)
{
    int iCnt= 0;
    int iMax = Arr[0];
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
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

    iRet = Maximum(p, iSize);

    printf("Largest number is : %d\n", iRet);

    free(p);
}