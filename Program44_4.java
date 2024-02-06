//Problem Statement: Write a java program which accept array of characters from user and return differrence between frequency of capital and small characters
// Input: b N j B R b A d G G
//        
//Output: 2 (6-4)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Program44_4
{
	public static void main(String ar[])
	{  
		Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the string : ");
        String str = sobj.nextLine();
        
        char Arr[] = str.toCharArray();

		System.out.println("Character array is :");
        for(int i=0; i< Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }

        int iCnt1 = 0, iCnt2 = 0,iDiff = 0;
        for(int i=0; i< Arr.length; i++)
        {
            if(((Arr[i] >= 'A') && (Arr[i] <= 'Z')))
			{
				iCnt1++;
			}
            else
            {
                iCnt2++;
            }	
           
        }
        System.out.println("Capital case letters are :" +iCnt1);
        System.out.println("Small case letters are :" +iCnt2);
        
        iDiff = iCnt1 -iCnt2;
        System.out.println("Difference between capital and small case letters is :" +iDiff);
        
		
	}
}

