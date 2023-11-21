////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept string from user and count number of capital characters. 
//
//Input: "Marvellous Multi OS"
//Output: 4
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     CountCapital()
// Description :      Count capital letters from string. 
// Input :            string 
// Output :           Display number of capital letters in string
// Author :           Sayali Hanumant Thorat
// Date :             03/1/2023
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Count
{
    public int CountCapital(String s)
    {
        int iCnt = 0;
        char Arr[] = s.toCharArray();

        for(int i = 0; i< Arr.length;i++)
        {
            if((Arr[i] >= 'A') &&(Arr[i] <= 'Z') )
            {
                iCnt++;
            }
        }
        return iCnt;

    }

}

class Program31_1
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the string");
        String str = sobj.nextLine();
        Count cobj = new Count();
        int iRet = cobj.CountCapital(str);
        System.out.println("Number of capital letters in string are : " +iRet);

    }
}