////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a java program which accept N numbers from user and accept another number as No and return index of last occurrence of that No
//
//Input:  N: 6
//        No:66
//       Elements: 85 66 3 66 93 88
//Output: 3
////
//Input:  N: 6
//        No:93
//       Elements: 85 11 3 66 93 88
//Output: 4
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
	
	public int LastOccurrence()
	{
        int iCnt = 0;

        for(iCnt =Arr.length-1; iCnt >= 0; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                return iCnt;
            }
        }
        return -1;
		
        
	}
}

class Program34_3
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
		
		int iRet = obj.LastOccurrence();
        if(iRet == -1)
        {
            System.out.println("There is no such number");
        }
        else
        {
            System.out.println("Last occurrence of " + iNo + " is at index " + iRet);

        }    
		
		
	}
}