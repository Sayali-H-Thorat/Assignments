////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept string from user and count number of small characters. 
//
//Input: "Marvellous"
//Output: 9
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     CountSmall()
// Description :      Count small letters from string. 
// Input :            string 
// Output :           Display number of small letters in string
// Author :           Sayali Hanumant Thorat
// Date :             03/1/2023
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Count
{
    public int CountSmall(String s)
    {
        int iCnt = 0;
        char Arr[] =s.toCharArray();

        for(int i = 0; i<Arr.length;i++)
        {
            if((Arr[i] >= 'a') &&(Arr[i] <= 'z'))
            {
                iCnt++;
            }
        }
        return iCnt;

    }
}


class Program31_2 
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the string");
        String str = sobj.nextLine();
        Count cobj = new Count();
        int iRet = cobj.CountSmall(str);
        System.out.println("Number of small letters in string are :" +iRet);


    }
    
}
