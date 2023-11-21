////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a java program which accept N numbers from user and accept range, display all elements from that range
//
//Input:  N: 6
//        start:60
//        end:90
//       Elements: 85 66 3 76 93 88
//Output: 66 76 88
//
//Input:  N: 6
//        start:30
//        end:50
//       Elements: 85 66 3 76 93 88
//Output: 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Number
{
	public int Arr[];
	public int iStart;
	public int iEnd;
	
	public Number(int iSize,int i, int j)
	{
		Arr = new int[iSize];
		iStart = i;
		iEnd = j;

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
	public MarvellousX(int iSize, int iStart, int iEnd)
	{
		super(iSize, iStart,iEnd);
	}
	
	public void Range()
	{
        int iCnt = 0;
        System.out.println("Numbers between Start and end points are:");
        for(iCnt =Arr.length-1; iCnt >= 0; iCnt--)
        {
            if(Arr[iCnt] >= iStart && (Arr[iCnt] <= iEnd))
            {
                System.out.println(Arr[iCnt]);
            }

        }
        
        
	}
}

class Program34_4
{
	public static void main(String ar[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array that you want to create : ");
		int iSize = sobj.nextInt();

		System.out.println("Enter the starting point : ");
		int iStart = sobj.nextInt();

		System.out.println("Enter the ending point : ");
		int iEnd = sobj.nextInt();
	

		
		MarvellousX obj = new MarvellousX(iSize, iStart,iEnd);
		
		obj.Accept();
		
		obj.Display();
		
		obj.Range();
          
		
		
	}
}