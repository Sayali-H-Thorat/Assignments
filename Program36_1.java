//Problem Statement: Write a java program which accept number of rows and columnsfrom user and display below pattern
// Input: iRow:5  iCol:5
//Output: 
//           A       B       C       D       E       F
//           A       B       C       D       E       F
//           A       B       C       D       E       F
//           A       B       C       D       E       F
//           A       B       C       D       E       F
//           A       B       C       D       E       F
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;
class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char ch;

        for(i = 0; i <= iRow; i++)
        {
            for(j = 0,ch = 'A';j <= iCol ; j++,ch++ )
            {
                System.out.print(ch+"\t");
            }
            System.out.println();

        }
        
    }

}
class Program36_1
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