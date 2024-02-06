
//Problem Statement: Write a java program which accept two arrays from user and display minimum element of each array
// Input: 1st array: 2  9  7  5  2  3
//        2nd array: 9  3  5  5
//
//Output: 2
//        3
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

    public void MinimumArrayElement()
	{
        int iMin1 = Arr1[0];
        int iMin2 = Arr2[0];
		
		System.out.print("Minimum element from 1st array is :");
		for(int iCnt = 0; iCnt < Arr1.length; iCnt++) 
        {
            if(Arr1[iCnt] < iMin1)
		    {
			    iMin1 = Arr1[iCnt];
			}
	    }
	    System.out.print(iMin1);
		
		System.out.print("Minimum element from 2nd array is :");
		for(int iCnt = 0; iCnt < Arr2.length; iCnt++) 
        {
            if(Arr2[iCnt] < iMin2)
		    {
			    iMin2 = Arr2[iCnt];
			}
	    }
	    System.out.print(iMin2);        
	}	
}
class Program42_2
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

		obj.MinimumArrayElement();
		
	}
}

