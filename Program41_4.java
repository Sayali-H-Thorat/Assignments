//Problem Statement: Write a java program which accept two arrays from user and form new array which is combination of contents of first and second array.
// Input: 1st array: 12 57 28 3
//        2nd array: 99 23 54 58 6 67
//
//Output: 12 57 28 3 99 23 54 58 6 67

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class ArrayX
{
	public int Arr1[];
	public int Arr2[];
	public int MergedArray[];

	
	public ArrayX(int iSize1,int iSize2,int Mergedarr)
	{
		Arr1 = new int[iSize1];
		Arr2 = new int[iSize2];
		MergedArray = new int[Mergedarr];
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

    public void Display()
	{
		System.out.println("Elements of 1st array are :");
		for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
		{
			System.out.print(Arr1[iCnt]+"\t");
		}
		System.out.println();

		System.out.println("Elements of 2nd array are :");
		for(int iCnt = 0; iCnt < Arr2.length; iCnt++)
		{
			System.out.print(Arr2[iCnt]+"\t");
		}
		System.out.println();
	}
	

	public void ArrayConcate()
	{
        int pos =0;
		System.out.println("Array Elements after concatenation are :");
		for(int iCnt :Arr1)
		{
            MergedArray[pos]=iCnt;
            pos++;
                      		          		         		          		
		}
		
		for(int iCnt :Arr2)
		{
            MergedArray[pos]=iCnt;
            pos++;
                      		          		         		          		
		}
        System.out.println(Arrays.toString(MergedArray));
		
		
	}
}
class Program41_4
{
	public static void main(String ar[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of 1st array that you want to create : ");
		int iSize1 = sobj.nextInt();
        
		System.out.println("Enter the size of 2nd array that you want to create : ");
		int iSize2 = sobj.nextInt();
		
        int length = iSize1 + iSize2;

        int Mergedarr[] = new int[length];

		ArrayX obj = new ArrayX(iSize1,iSize2,length);
		
		obj.Accept();

        obj.Display();

		obj.ArrayConcate();
		
	}
}
