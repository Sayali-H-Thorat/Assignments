///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept temperature in Fahreinheit and convert it into celsius
//
//Input:  10
//Output: -12.0000   (10 - 32) * 5) /9)
//
//Input:  34
//Output: 1.1111    (34 - 32) * 5) /9) 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     FhToCs()
// Description :      Accept tempereature in Fahreinheit and convert it to celsius
// Input :            Temperature(Integer)
// Output :           Farenheit to Celcius(float)
//Time Complexity:    
// Author :           Sayali Hanumant Thorat
// Date :             05/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float FhToCs(float fTemp)
{
    float fCelcius = 0.0;

    if(fTemp != 0)
    {
        fCelcius = ((fTemp - 32) * 5)/9;
    }
    return fCelcius;
}

int main()
{
    float fValue = 0.0;
    float fRet = 0.0;

    printf("Enter temperature in Fahreinheit:\n");
    scanf("%f", &fValue);

    fRet = FhToCs(fValue);

    printf("Temperature in Celcius is : %f", fRet);

    return 0;

}