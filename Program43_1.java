//Problem Statement: Write a java program which accept two arrays from user and reverse each number of that array
// Input: 89  687  56  549  87  9
//        
//
//Output: 98 786  65  945  78  9
//        

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
		System.out.println("Elements of 1st array are :");
		for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
		{
			System.out.print(Arr1[iCnt]+"\t");
		}
		System.out.println();
	}
    
    public void ReverseArray()
    {
        int iCnt = 0, iDigit = 0, iRev= 0;

        System.out.println("Elements in reverse are :");
        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            iRev = 0;
            while(Arr1[iCnt] != 0)
            {
                iDigit = Arr1[iCnt] % 10;

                iRev = (iRev * 10)+ iDigit;
                
                Arr1[iCnt]= Arr1[iCnt] / 10;        
            }
            System.out.print(iRev+"\t");
        }
    } 
}
class Program43_1
{
	public static void main(String ar[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of 1st array that you want to create : ");
		int iSize1 = sobj.nextInt();
        
		ArrayX obj = new ArrayX(iSize1);
		
		obj.Accept();

        obj.Display();

		obj.ReverseArray();
       
	}
}
