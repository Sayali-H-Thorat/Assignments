//Problem Statement: Write a java program which accept string from user and display below pattern
// Input: iRow=6 iCol =6
//Output: 
//         1       2       3       4       5       6       7
//         1       2                                       7
//         1               3                               7
//         1                       4                       7
//         1                               5               7
//         1                                       6       7
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public void Display(int iRow , int iColumn)
    {
        int i = 0, j = 0, iCnt = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j =1,iCnt = 1; j<= iColumn+1; j++,iCnt++)
            {
                if(i == 1 || j == 1 || i == iRow + 1 || j == iColumn + 1|| i == j)
                {
                    System.out.print(iCnt+"\t");
                }
                else 
                {
                    System.out.print("\t");
                }
               
            }
            System.out.println();
        }

    }
}

class Program40_5
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