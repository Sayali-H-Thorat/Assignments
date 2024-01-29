//Problem Statement: Write a java program which accept number of rows and columnsfrom user and display below pattern
// Input: iRow:3  iCol:4
//Output: 
//          1       2       3       4
//          5       6       7       8
//          9       10      11      12
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0,iCnt = 1;

        for(i = 1; i <=iRow; i++)
        {
            for(j = 0;j < iCol ; j++ )
            {
                System.out.print(iCnt++ +"\t");
            }
            System.out.println();

        }
        
    }

}
class Program36_5
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