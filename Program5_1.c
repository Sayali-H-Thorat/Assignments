///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept number from user and display multiplication of factors
//
//Input: 12
//Output: 144   (1*2*3*4*6)
//
//Input: 13
//Output: 1  (1)
//
//Input: 10
//Output: 10  (1*2*5)
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: MultFact()
// Description :  Accept one numbers from user and display multiplication of factors of that number
// Input :        Integer
// Output :       Multiplication of factors(Integer)
// Author :       Sayali Hanumant Thorat
// Date :         20/10/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
	int iSum = 1;
	
	
	for(iCnt = 1; iCnt <= (iNo/2); iCnt++)  
	{
		if((iNo % iCnt) == 0)  
		{
			iSum = iSum * iCnt;
		}
	}
	return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d", iRet);

    return 0; 
}