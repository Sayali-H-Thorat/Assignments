//Problem Statement: Write a java program which accept N students from user and display class of each student
//Less than 35:Fail
//Less than 50:Pass class
//Less than 60:Second class
//Less than 70:First class
//Greater than 70:First class with distinction
//
//Input: 67.3  45.8  88.9  77.5  55.2
//
//Output: 67.3: First class
//        45.8: Pass class
//        88.9: First class with distinction
//        77.5: First class with distinction
//        55.2: Second class
//        

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

import javax.lang.model.util.ElementScanner6;

class ArrayX
{
	public float Arr1[];
	
	public ArrayX(int iSize1)
	{
		Arr1 = new float[iSize1];
	
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Please enter percentage of " + Arr1.length + " student");
		for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
		{
			Arr1[iCnt] = sobj.nextFloat();
		}
	}

    public void Display()
	{
		System.out.println("Elements of 1st array are :");
		for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
		{
			System.out.print(Arr1[iCnt]+"\t\t\t");
		}
		System.out.println();
	}
    
    public void Percentage()
    {
        for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
		{
			if(Arr1[iCnt] < 35)
            {
                System.out.print("Fail\t");
            }
            else if((Arr1[iCnt] < 50) && (Arr1[iCnt] > 35))
            {
                System.out.print("Pass class\t");
            }
            else if((Arr1[iCnt] < 60) && (Arr1[iCnt] > 50))
            {
                System.out.print("Second class\t");
            }
            else if((Arr1[iCnt] < 70) && (Arr1[iCnt]>60))
            {
                System.out.print("First class\t");
            }
            else
            {
                System.out.print("First class with distinction\t");
            }
		} 


    } 
}
class Program43_5
{
	public static void main(String ar[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number of students : ");
		int iSize1 = sobj.nextInt();
        
		ArrayX obj = new ArrayX(iSize1);
		
		obj.Accept();

        obj.Display();

		obj.Percentage();
       
	}
}

