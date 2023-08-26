//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept N numbers from user and accept range and display all elements from that range
//
//Input: N :6
// start: 60
//End: 90
//Elements : 85 66 3 76 93 88
//Output: 85 66 76 88
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Range()
// Description :      Accept range from user and display the numbers present in array between that range
// Input :            Integer
// Output :           (Integer)
// Author :           Sayali Hanumant Thorat
// Date :             09/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    printf("Numbers between %d and %d are:\n", iStart,iEnd);
    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        if(Arr[iCnt] >= iStart && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
    
}

int main()
{
    int iSize = 0, iRet = 0,iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter the number of array elements :\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the Starting point number:\n");
    scanf("%d", &iValue1);

    printf("Enter the Ending point number:\n");
    scanf("%d", &iValue2);

    printf("Enter the %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}