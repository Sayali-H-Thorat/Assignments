//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept N numbers from user and display summation of digits of each number
//
//Input: N :6
//Elements : 8225 665 3 76 953 858
//Output: 17 17 3 13 17 21
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     DigitsSum()
// Description :      Accept number from user and display the sum of digits of numbers
// Input :            Array of Integer
// Output :           Numbers which contains 3 digits in it(Integer)
// Author :           Sayali Hanumant Thorat
// Date :             12/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[], int iLength)
{
     int iCnt = 0, iDigit = 0, iSum = 0;

        for(iCnt = 0; iCnt < iLength; iCnt++)
        {
            int iSum=0;
            while(Arr[iCnt] != 0)
            {
                iDigit = Arr[iCnt] % 10;
                
                Arr[iCnt]= Arr[iCnt] / 10;

                iSum = iSum + iDigit;                              

            }
            
            printf("Sum of digits of array elements is: %d\n",iSum);
        }
}

int main()
{
    int iSize = 0,iCnt = 0;
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

    DigitsSum(p, iSize);

    free(p);   

    return 0;
}