//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept N numbers from user and return difference between frequency of even numbers and odd numbers 
//
//Input:  N:7
//Elements:  85 66  3   80  93  88 90
//Output: 1 (4 - 3)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Frequency()
// Description :      Accept N numbers from user and display difference between frequency of even numbers and odd numbers
// Output :           Difference between frequency of even and odd numbers(Integer)
// Author :           Sayali Hanumant Thorat
// Date :             09/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0,iAns = 0;
    int iEvenCnt = 0;
    int iOddCnt = 0;

    for(iCnt =0; iCnt <iLength; iCnt++)
    {
        if(Arr[iCnt] %2 == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
        iAns = iEvenCnt - iOddCnt;
    }
   
    return iAns;
}

int main()
{
    int iSize = 0, iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements:\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unabble to allocate the memory");
        return -1;
    }

    printf("Enter the %d Elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize);

    printf("Difference between even and odd number count is: %d\n", iRet);

    free(p);

    return 0;
}