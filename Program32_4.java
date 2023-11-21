////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a java program which accept N number from user and display all such elements which are divisible by 3 and 5 
//
//Input:  N: 6
//Elements : 85 66 3 15 93 80
//Output: 15
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
	
	public void DivisibleByFiveAndThree()
	{
       
        System.out.println("Numbers which are divisible by 5 and 3 are :");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 5  == 0) && (Arr[iCnt] % 3 == 0))
            {
                System.out.println(Arr[iCnt]);
            }
        }
	    
	}
}

class Program32_4
{
	public static void main(String ar[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array that you want to create : ");
		
		int iSize = sobj.nextInt();
		
		MarvellousX obj = new MarvellousX(iSize);
		
		obj.Accept();
		
		obj.Display();
		
		obj.DivisibleByFiveAndThree();
		
	}
}