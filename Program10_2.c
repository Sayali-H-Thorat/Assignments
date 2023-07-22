///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept width and height of rectangle from user and calculate its area(Area = Width * Height)
//
//Input:  5.3   9.70
//Output: 51.834  
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     RectArea()
// Description :      Accept height and width from user and display area of rectangle.
// Input :            Height/Width(float)
// Output :           Area of rectangle(float)
//Time Complexity:    
// Author :           Sayali Hanumant Thorat
// Date :             05/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    float rArea = 0.0;

    if(fWidth != 0 && fHeight != 0)
    {
        rArea = fWidth * fHeight;
    }

    return rArea;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter the width :\n");
    scanf("%f", &fValue1);

    printf("Enter the height :\n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is: %f", dRet);

    return 0;


    
}