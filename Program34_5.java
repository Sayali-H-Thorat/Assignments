////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a java program which accept N numbers from user and return product of all odd elements
//
//Input:  N: 6
//       Elements: 15 66 3 70 10 88
//Output: 45
//
//Input:  N: 6
//       Elements: 44 66 72 70 10 88
//Output: 0
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Number
{
	public int Arr[];
	
	
	public Number(int iSize)
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
class MarvellousX extends Number
{
	public MarvellousX(int iSize)
	{
		super(iSize);
	}
	
	public int Product()
	{
        int iMult = 1;
        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            if((Arr[iCnt]% 2) != 0)
            {
                iMult = iMult * Arr[iCnt];
            }
        }
        return iMult;
    }
}

class Program34_5
{
	public static void main(String ar[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array that you want to create : ");
		int iSize = sobj.nextInt();
	    
        MarvellousX obj = new MarvellousX(iSize);
		
		obj.Accept();
		
		obj.Display();
		
		int iRet = obj.Product();

        System.out.println("Multiplication of all odd elements is :" +iRet);
          
		
		
	}
}