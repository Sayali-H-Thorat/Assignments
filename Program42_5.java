//Problem Statement: Write a java program which accept two arrays from user and check whether that array and its elements are pallindrome or not
// Input: 1st array:11  252  387783  252  11
//       
//
//Output: TRUE
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class ArrayX
{
	protected int Arr[];
	
	public ArrayX(int iSize)
	{
		Arr = new int[iSize];
	}
	
	protected void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Please enter " + Arr.length + " elements");
		
		for(int iCnt = 0; iCnt < Arr.length;iCnt++)
		{
			System.out.println("Enter the element no : " +(iCnt+1));
			Arr[iCnt] = sobj.nextInt();
		}
	}
	
	protected void Display()
	{
		System.out.println("Elements of array are :");
		
		for(int iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			System.out.print(Arr[iCnt]+"\t");
		}
		System.out.println();
	}
}
class MarvellousX extends ArrayX
{
	public MarvellousX(int iSize)
	{
		super(iSize);
	}
	
	public boolean CheckPallindromeArray()
	{
		int iStart = 0;
		int iEnd = Arr.length-1;
		boolean bFlag = true;
		
		while(iStart < iEnd)
		{
			
			if(Arr[iStart] != Arr[iEnd])
			{
				bFlag = false;
				break;
			}
			iStart++;
			iEnd--;
		}
		return bFlag;
		
	}
}

class Program42_5
{
	public static void main(String ar[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array that you want to create : ");
		
		int iSize = sobj.nextInt();
		
		MarvellousX obj = new MarvellousX(iSize);
		
		obj.Accept();
		
		obj.Display();
		
		
		boolean bRet = obj.CheckPallindromeArray();
		if(bRet == true)
		{
			System.out.println("Array is pallindrome");
		}
		else
		{
			System.out.println("Array is not pallindrome");
		}
		
		
	}
}
