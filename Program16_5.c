//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement:Accept N numbers from user and return product of all odd elements
//
//Input:  N : 6
//Elements: 15 66 3 70 10 88
//Output: 45
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Product()
// Description :      Accept number from user and display product of odd numbers
// Input :            Array of Integer
// Output :           Product of odd numbers(Integer)
// Author :           Sayali Hanumant Thorat
// Date :             09/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Product(int Arr[],int iLength)
{
    int iCnt = 0;
    int iProduct = 1;

    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    }
    return iProduct;
}

int main()
{
    int iCnt = 0, iRet = 0, iSize = 0;
    int *p = NULL;

    printf("Enter the number of array elements :\n");
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

    iRet = Product(p, iSize);

    if(iRet==1)
    {
	    printf("There are no such odd numbers");
    }
    else
    {
	    printf("Product of odd Numbers in the array is: %d\n",iRet);
    }

    free(p);

    return 0;
}