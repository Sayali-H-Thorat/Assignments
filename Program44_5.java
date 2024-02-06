//Problem Statement: Write a java program which accept array from user and display that numbers of * on screen
// Input: 5 4 3 2 5
//        
//Output: * * * * *
//        * * * *
//        * * * 
//        * *
//        * * * * *
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class ArrayX
{
	public int Arr1[];
	
	public ArrayX(int iSize1)
	{
		Arr1 = new int[iSize1];
	
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Please enter 1st arrays  " + Arr1.length + " elements");
		for(int iCnt = 0; iCnt < Arr1.length;iCnt++)
		{
			Arr1[iCnt] = sobj.nextInt();
		}
	}

    public void Display()
	{
		System.out.println("Elements of array are :");
		for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
		{
			System.out.print(Arr1[iCnt]+"\t");
		}
		System.out.println();
	}
    
    public void Pattern()
    {
        int iCnt = 0,iCnt2=0;
		System.out.println("Pattern is:");
	
	    for(iCnt = 0; iCnt < Arr1.length; iCnt++)
	    {
            for(iCnt2 = 0; iCnt2 <Arr1[iCnt]; iCnt2++)
            {
                System.out.print("*\t");
            }		    
			System.out.println();
	    }
	    
        
    } 
}
class Program44_5
{
	public static void main(String ar[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array that you want to create : ");
		int iSize1 = sobj.nextInt();
        
		ArrayX obj = new ArrayX(iSize1);
		
		obj.Accept();

        obj.Display();

		obj.Pattern();
       
	}
}
