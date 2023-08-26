//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept N numbers from user and return frequency of 11 from it
//
//Input:  N:6
//Elements:  85 66  3   15  93  88
//Output: 0
//
//Input:  N:6
//Elements:  85 11  3   15  11 111
//Output: 2
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Frequency()
// Description :      Accept N numbers from user and display frequency of 11
// Input :            Array of Integer
// Output :           frequency of 11(Integer)
// Author :           Sayali Hanumant Thorat
// Date :             09/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}
int main()
{
    int iCnt = 0, iRet = 0, iValue = 0;
    int *p =NULL;
    int iSize = 0;

    printf("Enter the number of array elements:\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unble to allocate the memory");
        return -1;
    }

    printf("Enter the %d array elements :\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize);

    printf("Frequency count of 11 number is: %d",iRet);

    free(p);
    

    return 0;
}