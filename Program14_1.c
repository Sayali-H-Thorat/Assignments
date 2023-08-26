//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept N numbers from user and return difference between summation of even elements and summation of odd elements
//Input:  N: 6
//Elements: 85 66 3 80 93 88
//Output: 53  (234 - 181)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Difference()
// Description :      difference between summation of even elements and summation of odd elements
// Input :            Array of Integer
// Output :           Difference between summation of odd and even no(Integer)
// Author :           Sayali Hanumant Thorat
// Date :             09/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iSize)
{
    int iCnt = 0;
	int iEvenSum = 0;
	int iOddSum = 0;
    int iDiff = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if((Arr[iCnt] %2) == 0)
		{
			iEvenSum = iEvenSum + Arr[iCnt];
		}
		else
		{
			iOddSum= iOddSum + Arr[iCnt];
		}
    }
    iDiff = iEvenSum - iOddSum;
    return iDiff;

}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements:\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        //printf("Enter element: %d\t", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Difference between summation of odd and even numbers is : %d\n", iRet);

    free(p);


    return 0;
}