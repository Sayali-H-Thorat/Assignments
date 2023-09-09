//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept N numbers from user and display all such numbers which contains 3 digits in it
//
//Input: N :6
//Elements : 8225 665 3 76 953 858
//Output: 665 953 858
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Digits()
// Description :      Accept number from user and display the numbers which contains three digits in it
// Input :            Array of Integer
// Output :           Numbers which contains 3 digits in it(Integer)
// Author :           Sayali Hanumant Thorat
// Date :             12/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iLength)
{
    int iCnt = 0; int iDigit = 0;
    printf("3 digits numbers from array are:\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > 99 && Arr[iCnt] < 1000)
        {
            printf("%d\t", Arr[iCnt]);
        }  
        // while(Arr[iCnt] != 0)
        //     {
        //         iDigit = Arr[iCnt] % 10;
                
        //         Arr[iCnt]= Arr[iCnt] / 10;

        //         iCnt++;
                
        //     }
        //     if(iCnt == 3)
        //     {
        //         printf("%d\n", iCnt);
        //     }
                    
    }
    
}
int main()
{
    int iSize = 0,iRet = 0, iCnt = 0;
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

    Digits(p, iSize);

    free(p);   

    return 0;
}