///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept radius of circle from user and calculate its area.
//
//Input:  5.3
//Output: 88.2026
//
//Input:  10.4
//Output: 339.6224      
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     CircleArea()
// Description :      Accept radius from user and print area of circle
// Input :            (Radius)float/Integer
// Output :           Area of circle(float)
//Time Complexity:    
// Author :           Sayali Hanumant Thorat
// Date :             05/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float CircleArea(float fRadius)
{
    float cArea = 0.0;
    float PI = 3.14;

    if(fRadius != 0)
    {
        cArea = PI * fRadius * fRadius;
    }

    return cArea;

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    
    printf("Enter the radius:\n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %f", dRet);

    return 0;
}