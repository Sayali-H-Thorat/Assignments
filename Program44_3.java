//Problem Statement: Write a java program which accept array of characters from user and accept one character and return occurrence of that character
// Input: b N e B r b A i G i B b
//Character:b
//        
//Output: 3
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Program44_3
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

		System.out.println("Enter the character to find the occurrence:");
        char Ch = sobj.next().charAt(0); 

        int iCnt= 0;
        for(int i=0; i< Arr.length; i++)
        {
			if(Arr[i] == Ch)
			{
				if(((Arr[i] >= 'a') && (Arr[i] <= 'z'))  )
				{
					iCnt++;
				}               
				
			}           
        }
        System.out.println("Occurence of " +Ch+ " is :" +iCnt);        
		
	}
}
