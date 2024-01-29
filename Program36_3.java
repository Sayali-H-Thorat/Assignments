//Problem Statement: Write a java program which accept number of rows and columnsfrom user and display below pattern
// Input: iRow:  iCol:5
//Output: 
//          A       A       A       A       A       A
//          B       B       B       B       B       B
//          C       C       C       C       C       C
//          D       D       D       D       D       D
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;
class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char ch;

        for(i = 0,ch = 'A'; i < iRow; i++,ch++)
        {
            for(j = 0;j <= iCol ; j++ )
            {
                System.out.print(ch+"\t");
            }
            System.out.println();

        }
        
    }

}
class Program36_3
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