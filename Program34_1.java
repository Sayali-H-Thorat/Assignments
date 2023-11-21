////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a java program which accept N numbers from user and accept another number as No and check whether No is present or not.
//
//Input:  N: 6
//        No:66
//       Elements: 85 66 3 66 93 88
//Output: True
////
//Input:  N: 6
//        No:12
//       Elements: 85 11 3 15 11 111
//Output: False
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Number
{
	public int Arr[];
	public int iNo;
	
	public Number(int iSize,int No)
	{
		Arr = new int[iSize];
		iNo = No;

	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Please enter " + Arr.length + " elements");
		
		for(int iCnt = 0; iCnt < Arr.length;iCnt++)
		{
			System.out.println("Enter the element no : " +(iCnt+1));
			Arr[iCnt] = sobj.nextInt();
		}
	}
	
	public void Display()
	{
		System.out.println("Elements of array are :");
		
		for(int iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			System.out.print(Arr[iCnt]+"\t");
		}
		System.out.println();
	}
}
class MarvellousX extends Number
{
	public MarvellousX(int iSize, int iNo)
	{
		super(iSize, iNo);
	}
	
	public boolean Check()
	{
		int iCnt = 0;

		for(iCnt =0 ; iCnt <Arr.length; iCnt++)
		{
			if(Arr[iCnt] == iNo)
			{
				return true;
			}

		}
		return false;
        
	}
}

class Program34_1
{
	public static void main(String ar[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array that you want to create : ");
		int iSize = sobj.nextInt();
		
		System.out.println("Enter the number that you want to search : ");
		int iNo = sobj.nextInt();
		
		MarvellousX obj = new MarvellousX(iSize, iNo);
		
		obj.Accept();
		
		obj.Display();
		
		boolean bRet = obj.Check();
		if(bRet == true)
		{
			System.out.println("Number is present ");
		}
		else
		{
			System.out.println("Number is not present ");
		}		
		
	}
}