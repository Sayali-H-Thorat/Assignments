//Problem Statement: Write a java program which accept number of rows and columnsfrom user and display below pattern
// Input: iRow:3  iCol:4
//Output:
//        1       1       1       1
//        2       2       2       2
//        3       3       3       3
//          
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iColumn)
    {
        int i = 0, j = 0;

        for(i = 1; i<= iRow; i++)
        {
            for(j = 0; j< iColumn; j++)
            {
                System.out.print(i+"\t");
            }
            System.out.println();
        }

    }
}

class Program37_5
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