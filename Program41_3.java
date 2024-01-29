//Problem Statement: Write a java program which accept two arrays from user and display odd contents of each array
// Input: 1st array: 2 9 6 5 2 3
//        2nd array: 45 6 12 18 23 4
//
//Output: 9 5 3
//        45 23

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
			// System.out.println("Enter the element no : " +(iCnt+1));
			Arr1[iCnt] = sobj.nextInt();
		}

		System.out.println("Please enter 2nd arrays " + Arr2.length + " elements");
		for(int iCnt = 0; iCnt < Arr2.length;iCnt++)
		{
			// System.out.println("Enter the element no : " +(iCnt+1));
			Arr2[iCnt] = sobj.nextInt();
		}
	}
	

	public void DisplayOdd()
	{
		System.out.println("Odd Elements of 1st array are :");
		for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
		{
            if(Arr1[iCnt] %2 != 0)
            {
                System.out.print(Arr1[iCnt]+"\t");
            }			
		}
		System.out.println();

		System.out.println("Odd Elements of 2nd array are :");
		for(int iCnt = 0; iCnt < Arr2.length; iCnt++)
		{
			if(Arr2[iCnt] % 2 != 0)
            {
                System.out.print(Arr2[iCnt]+"\t");
            }
		}
		System.out.println();
	}
}
class Program41_3
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

		obj.DisplayOdd();
		
	}
}
