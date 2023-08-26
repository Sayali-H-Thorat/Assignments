//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept N numbers from user and display all such elements which are even and divisible by 5
//
//Input:  N:6
//Elements:  85 66  3   80  93  88
//Output: 80
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Display()
// Description :      Accept number from user and display even number which is divisible by 5
// Input :            Array of Integer
// Output :           Even number divisible by 5(Integer)
// Author :           Sayali Hanumant Thorat
// Date :             09/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Number is even and Divisible by 5 is :\n");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(((Arr[iCnt] % 5) == 0) && (Arr[iCnt] % 2) == 0)
        {
           printf("%d\t", Arr[iCnt]);
        }
    }
    

}

int main()
{
    int iSize = 0,iCnt = 0;
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

    Display(p, iSize);

    

    free(p);


    return 0;
}