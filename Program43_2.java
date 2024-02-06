//Problem Statement: Write a java program which accept two arrays from user and replace each member with summation of its digits
// Input: 89  687  56  549  87  9
//        
//
//Output: 17  21  11  18  15  9
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
    
    public void SumArray()
    {
        int iCnt = 0, iDigit = 0, iSum = 0;

        System.out.println("Summation of array elements is :");
        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            iSum=0;
            while(Arr1[iCnt] != 0)
            {
                iDigit = Arr1[iCnt] % 10;
                
                Arr1[iCnt]= Arr1[iCnt] / 10;

                iSum = iSum + iDigit;                              

            }
            
            System.out.print(iSum+"\t");
        }


    } 
}
class Program43_2
{
	public static void main(String ar[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of 1st array that you want to create : ");
		int iSize1 = sobj.nextInt();
        
		ArrayX obj = new ArrayX(iSize1);
		
		obj.Accept();

        obj.Display();

		obj.SumArray();
       
	}
}
