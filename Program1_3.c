///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement:Display numbers 5 to 1 on screen
//
//Static Input: 5
//Output: 5 4 3 2 1
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h.>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Display()
// Description :  Display numbers in reverse order till 1
// Input :        Integer
// Output :       Integer
// Author :       Sayali Hanumant Thorat
// Date :         19/10/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display()
{
    int i = 0;
    //int i = 5;
    for(i = 5; i >= 1; i--)
    {
        printf("%d\n", i);
        //i++;
    }

}
int main()
{
    Display();

    return 0;
}