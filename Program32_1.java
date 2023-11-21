////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a Java program which accept N numbers from user and return difference between summation of even elements and summation of odd elements 
//
//Input:  N: 6
//Elements : 85 66 3 80 93 88
//Output: 53 (234-181)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class ArrayX
{
	public int Arr[];
	
	public ArrayX(int iSize)
	{
		Arr = new int[iSize];
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

class MarvellousX extends ArrayX
{
	public MarvellousX(int iSize)
	{
		super(iSize);
	}
	
	public int Difference()
	{
        int iCnt = 0;
	    int iEvenSum = 0;
	    int iOddSum = 0;
        int iDiff = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
	    {
		    if((Arr[iCnt] %2) == 0)
		    {
			    iEvenSum = iEvenSum + Arr[iCnt];
		    }
		    else
		    {
			    iOddSum= iOddSum + Arr[iCnt];
		    }
        }
        iDiff = iEvenSum - iOddSum;
        return iDiff;

	}
}

class Program32_1
{
	public static void main(String ar[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array that you want to create : ");
		
		int iSize = sobj.nextInt();
		
		MarvellousX obj = new MarvellousX(iSize);
		
		obj.Accept();
		
		obj.Display();
		
		int iRet = obj.Difference();
		
		System.out.println("Difference between even and odd elements is : " +iRet);
		
	}
}