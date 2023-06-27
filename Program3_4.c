///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept character from user and convert case of that character
//
//Input: a
//Output: A
//
//Input: D
//Output: d
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: DisplayConvert()
// Description :  Accept a character from user and convert it to upper case or lower case according to input
// Input :        Character
// Output :       Upper Case / Lower Case(Character)
// Author :       Sayali Hanumant Thorat
// Date :         19/10/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayConvert(char CValue)
{
    if((CValue >= 'A') && (CValue <= 'Z'))
    {
        printf("Character after conversion is:%c", CValue + 32);
    }
    else if((CValue >= 'a') &&(CValue <= 'z'))
    {

        printf("Character after conversion is:%c",CValue - 32 );        
    }
	else
	{
		printf("It is not character\n");
	}    
}

int main()
{
    char cValue = '\0';

    printf("Enter character: \n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);
	

    return 0;
}