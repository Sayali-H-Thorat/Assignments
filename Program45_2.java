//Problem Statement: Write a java program which accept string from user and print frequency of each word
// Input: India is Demo India Hello Demo
//        
//Output: India 2
//        is 1
//        Demo 2
//        Hello 1
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Program45_2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string :");
		String str = sobj.nextLine();
		
		String Arr[] =str.split(" ");
		
		HashMap <String, Integer> hobj = new HashMap();
		int Frequency = 0;
		
		for(String ch : Arr)
		{
			if(hobj.containsKey(ch))
			{
				Frequency = hobj.get(ch);
				hobj.put(ch,Frequency+1);
			}
			else
			{
				hobj.put(ch,1);
			}
			
		}
		
		System.out.println(hobj);

    }
}