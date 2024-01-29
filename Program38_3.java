//Problem Statement: Write a java program which accept string from user and display below pattern
// Input: String :Hello
//Output: 
//         H       e
//         H       e       l
//         H       e       l       l
//         H       e       l       l       o         
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public void Display(String str)
    {
        int length = str.length();
        int i = 1,j = 1;

        char arr[] = str.toCharArray();

        for(i = 0; i <= length-1 ; i++)
        {
            for(j = 0; j <= length-1; j++)
            {
                if(i >= j)
                {
                    System.out.print(arr[j]+"\t");
                }
                
            }
            System.out.println();
        }

    }
}

class Program38_3
{
   public static void main(String arg[])
   {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string:");
        String str = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Display(str);

   } 
}