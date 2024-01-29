//Problem Statement: Write a java program which accept number of rows and columnsfrom user and display below pattern
// Input: iRow:4  iCol:4
//Output: 
//           A       B       C       D 
//           a       b       c       d
//           A       B       C       D 
//           a       b       c       d 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

import java.util.*;
class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char ch;

        for(i = 0; i < iRow; i++)
        {
            if((i%2) == 0)
            {
                for(j = 0,ch = 'A';j < iCol ; j++,ch++ )
                {
                    System.out.print(ch+"\t");
                }

            }
            else
            {
                for(j = 0,ch = 'a';j < iCol ; j++,ch++ )
                {
                    System.out.print(ch+"\t");
                }
            }
            System.out.println();

        }
        
    }

}
class Program36_2
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