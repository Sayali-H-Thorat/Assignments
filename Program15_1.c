//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept N numbers from user and return frequency of even numbers
//
//Input:  N:6
//Elements:  85 66  3   55  93  88
//Output: 2
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     CountEven()
// Description :      Accept N numbers from user and display frequency of even numbers
// Input :            Array of Integer
// Output :           frequency of even numbers(Integer)
// Author :           Sayali Hanumant Thorat
// Date :             09/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenCnt = 0;

    for(iCnt =0; iCnt <iLength; iCnt++)
    {
        if(Arr[iCnt] %2 == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
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

    iRet = CountEven(p, iSize);

    printf("Frequency of Even numbers in Array is: %d\n", iRet);

    free(p);

    return 0;
}