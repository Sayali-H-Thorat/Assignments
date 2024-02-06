//Problem Statement: Write a java program which accept two arrays from user and replace each member with summation of its digits
// Input: 89  687  56  549  87  9
//        
//
//Output: 17  21  11  18  15  9
//        

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Program43_4
{
	public static void main(String Arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the characters:\t");		
		char Arr[] = sobj.next().toCharArray();
	
		System.out.println("Number of characters are:"+Arr.length);
		
        int iCnt = 0;
		for(int i = 0; i<Arr.length;i++)
		{
			if((Arr[i] >= 'A') &&(Arr[i]<= 'Z'))
			{
				iCnt++;
			}
			
		}
		System.out.println("Capital letters are : "+iCnt);

	}
}