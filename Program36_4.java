//Problem Statement: Write a java program which accept number of rows and columnsfrom user and display below pattern
// Input: iRow:4  iCol:5
//Output: 
//          4       4       4       4       4
//          3       3       3       3       3
//          2       2       2       2       2
//          1       1       1       1       1
//           
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = iRow; i >0; i--)
        {
            for(j = 0;j < iCol ; j++ )
            {
                System.out.print(i+"\t");
            }
            System.out.println();

        }
        
    }

}
class Program36_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        Pattern pobj = new Pattern();

        System.out.println("Enter number of rows : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iNo2 = sobj.nextInt();

        pobj.Display(iNo1, iNo2);

    }
}