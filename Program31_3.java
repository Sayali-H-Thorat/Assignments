////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept string from user and return difference between frequency of small characters   and frequency of capital characters
//
//Input: "MarvellouS"
//Output: 6   (8-2)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     CountDiff()
// Description :      Difference between capital and small letters from string. 
// Input :            string 
// Output :           Display Difference between capital and small letters from string. 
// Author :           Sayali Hanumant Thorat
// Date :             03/1/2023
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Difference
{
    public int CountDiff(String s)
    {
        int iCnt1 = 0;
        int iCnt2 = 0;

        char Arr[] = s.toCharArray();

        for(int i = 0; i< Arr.length; i++)
        {
            if((Arr[i]>= 'a') && (Arr[i] <= 'z'))
            {
                iCnt1++;
            }
            else
            {
                iCnt2++;
            }
            
        }
        return iCnt1-iCnt2;
    }
}

class Program31_3 
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        Difference dobj = new Difference();
        int iRet = dobj.CountDiff(str);
        System.out.println("Differenec between capital and small case letters is :" +iRet);


    }
    
}
