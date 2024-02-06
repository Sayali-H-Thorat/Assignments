//Problem Statement: Write a java program which accept array of characters from user and count the vowels in it
// Input: u N j o R b A d i e
//        
//Output: 5
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Program44_2
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

        int iCnt = 0;
        for(int i=0; i< Arr.length; i++)
        {
			if(((Arr[i] == 'a') || (Arr[i] == 'e') || (Arr[i] == 'i') || (Arr[i] == 'o') || (Arr[i] == 'u') || (Arr[i] == 'A') || (Arr[i] == 'E') || (Arr[i] == 'I') || (Arr[i] == 'O') || (Arr[i] == 'U')))
			{
				iCnt++;
			}
           
        }
        System.out.println("Number of vowels is :"+iCnt);
	}
}

