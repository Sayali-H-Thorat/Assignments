//Problem Statement: Write a java program which accept two arrays from user and return differrence between summation of arrays
// Input: 1st array: 2 9 7 5 2 3
//        2nd array: 9 3 5 5
//
//Output: 6
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class ArrayX
{
	public int Arr1[];
	public int Arr2[];
	
	public ArrayX(int iSize1,int iSize2)
	{
		Arr1 = new int[iSize1];
		Arr2 = new int[iSize2];
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Please enter 1st arrays  " + Arr1.length + " elements");
		for(int iCnt = 0; iCnt < Arr1.length;iCnt++)
		{
			Arr1[iCnt] = sobj.nextInt();
		}

		System.out.println("Please enter 2nd arrays " + Arr2.length + " elements");
		for(int iCnt = 0; iCnt < Arr2.length;iCnt++)
		{
			Arr2[iCnt] = sobj.nextInt();
		}
	}

    public void DifferenceArray()
	{
		System.out.println("Addition of 1st array elements is :");
        int iSum = 0;
        int iDiff = 0;
		for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
		{
			 iSum = iSum +Arr1[iCnt];
		}
		System.out.println(iSum);

		System.out.println("Addition of 2nd array elements is :");
        int iSum1 = 0;
		for(int iCnt = 0; iCnt < Arr2.length; iCnt++)
		{
			 iSum1 = iSum1 +Arr2[iCnt];
		}
		System.out.println(iSum1);

        iDiff = iSum - iSum1;
        System.out.println("Difference between summation of 1st and 2nd array elements is :"+iDiff);
		
	}	
}
class Program42_1
{
	public static void main(String ar[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of 1st array that you want to create : ");
		int iSize1 = sobj.nextInt();
        
		System.out.println("Enter the size of 2nd array that you want to create : ");
		int iSize2 = sobj.nextInt();
		
		ArrayX obj = new ArrayX(iSize1,iSize2);
		
		obj.Accept();

		obj.DifferenceArray();
		
	}
}
