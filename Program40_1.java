//Problem Statement: Write a java program which accept string from user and display below pattern
// Input: iRow=4 iCol =4
//Output: 
//            *       *       *       #
//            *       *       #       *
//            *       #       *       *
//            #       *       *       *
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public void Display(int iRow , int iColumn)
    {
        int i = 0, j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j =iColumn; j >= 1; j--)
            {
                if(i ==j)
                {
                    System.out.print("#\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }

    }
}

class Program40_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of Rows: ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the number of Columns: ");
        int iNo2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iNo1, iNo2);
    }
}