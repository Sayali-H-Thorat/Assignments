//Problem Statement: Write a java program which accept array of characters from user and replace each capital letter with its corresponding small letter
// Input: b N j B R b A d G G
//        
//Output: b n j b r b a d g g
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Program44_1
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

		System.out.println("Array after conversion is:");
        for(int i=0; i< Arr.length; i++)
        {
			if(Arr[i] >= 'a' && (Arr[i] <= 'z'))
			{
				System.out.println(Arr[i]);
			}
			else
			{
				Arr[i] = (char)(Arr[i] + 32);
		   		System.out.println(Arr[i]);

			}
           
        }
	}
}
