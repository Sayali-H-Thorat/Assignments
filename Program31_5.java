////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept string from user and display it in reverse order. 
//
//Input: "Marvellous"
//Output: soullevraM
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Reverse()
// Description :      Reverse the string. 
// Input :            string 
// Output :           Display the string in reverse order.
// Author :           Sayali Hanumant Thorat
// Date :             03/1/2023
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class ReverseX
{
    public void Reverse(String s)
    {
        char Arr[] = s.toCharArray();

        int iStart = 0, iEnd = 0;
        char iTemp;
        iEnd = Arr.length - 1;

        while(iStart < iEnd)
        {
            iTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = iTemp;

            iStart++;
            iEnd--;
        }


    }
}
class Program31_5 
{
   public static void main(String a[])
   {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the string");
        String str = sobj.nextLine();

        ReverseX robj = new ReverseX();
        robj.Reverse(str);

   } 
}
