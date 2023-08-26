//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept N numbers from user and display all such elements which are even and divisible by 3 and 5
//
//Input:  N:6
//Elements:  85 66  3   55  93  88
//Output: 66 55 88
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Display()
// Description :      Accept N numbers from user and display numbers which are multiplies of 11
// Input :            Array of Integer
// Output :           numbers which are multiplies of 11(Integer)
// Author :           Sayali Hanumant Thorat
// Date :             09/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Multiplies of Number 11 is :\n");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(((Arr[iCnt] % 11) == 0))
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