//Problem Statement: Write a java program which accept two arrays from user and copy the contents of that array into another array and return new array
// Input: 1st array: 5       8       5       6       9
//        2nd array: 10      20      30      40
//
//Output: 5       8       5       6       9
//        10      20      30      40

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

    public void CopyArray()
	{
		int iRet1 = Arr1.length;
		int iRet2 = Arr2.length;

        int Result =iRet1+ iRet2;
        
        int Arr[] = new int[Result];

        System.out.println("Array after merging two arrays is :");
        for(int iCnt = 0; iCnt < iRet1; iCnt++)
        {
            Arr[iCnt]=Arr1[iCnt];
        }

        for(int iCnt = 0; iCnt < iRet2; iCnt++)
        {
            Arr[iRet1 + iCnt] = Arr2[iCnt];
        }

        for(int iCnt = 0; iCnt < Result;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
	}	
}
class Program42_4
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

		obj.CopyArray();
		
	}
}
