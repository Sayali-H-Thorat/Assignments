//Problem Statement: Write a java program which accept string from user and display such a word which occurs maximum number of times
// Input: India is Demo India Hello Demo India
//        
//Output: India
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;


class Program45_3
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
		
		Set<String> setobj = hobj.keySet();
		
		int iMax = 0;
		String CMax = " ";
		for(String value : setobj)
		{
			if(iMax < hobj.get(value))
			{
				iMax = hobj.get(value);
				CMax = value;
			}
		}
		System.out.println("Maximum times occured word is : "+CMax+ " with frequency "+iMax);
    }
}