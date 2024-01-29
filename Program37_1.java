//Problem Statement: Write a java program which accept number of rows and columnsfrom user and display below pattern
// Input: iRow:4  iCol:3
//Output: 
//         *       *       *
//         *       *       *
//         *       *       *
//         *       *       *
//           
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iColumn)
    {
        int i = 0, j = 0;

        for(i = 0; i< iRow; i++)
        {
            for(j = 0; j<iColumn; j++)
            {
                System.out.print("*"+"\t");
            }
            System.out.println();
        }

    }
}

class Program37_1
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        Pattern pobj = new Pattern();

        System.out.println("Enter number of rows: ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter number of columns: ");
        int iNo2 = sobj.nextInt();

        pobj.Display(iNo1, iNo2);
    }
}