////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept string from user and check whether it contains vowelse in it or not 
//
//Input: "Marvellous"
//Output:  TRUE
////
//Input: "Demo"
//Output:  TRUE
////
//Input: "XYZ"
//Output:  FALSE
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     ChkVowel()
// Description :      Check whether string contains vowels or not
// Input :            string 
// Output :           Boolean
// Author :           Sayali Hanumant Thorat
// Date :             03/1/2023
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Vowels
{
    public boolean ChkVowel(String s)
    {
        char Arr[]=s.toCharArray();
		int i=0;
        
		while(i<Arr.length)
		{
			if((Arr[i]=='a')||(Arr[i]=='e')||(Arr[i]=='i')||(Arr[i]=='o')||(Arr[i]=='u') || (Arr[i]=='A')||(Arr[i]=='E')||(Arr[i]=='I')||(Arr[i]=='O')||(Arr[i]=='U'))
			{
				
			return true;
			}
			
			i++;
		}
		return false;
		
	}
}

class Program31_4 
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        Vowels vobj = new Vowels();
        boolean bRet = vobj.ChkVowel(str);
        if(bRet == true)
        {
            System.out.println("String contains vowels int it");

        }
        else
        {
            System.out.println("String does not contains vowels in it");
        }



    }
    
}


