//Problem Statement: Write a java program which accept string from user and remove that character from string
// Input: India is Demo India
//        i
//        
//Output: Inda s Demo Inda
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.ArrayList;
import java.util.Scanner;

class Program45_4 
{
   private static String removeOccurences(String str, Character character) 
   {
       ArrayList<Character> al=new ArrayList<>();
       for(int i=0;i<str.length();i++)
       {
           char ch = str.charAt(i);
           if(ch != character)
           {
               al.add(ch);
           }
       }

       StringBuilder stringBuilder=new StringBuilder();
       for(char c:al)
       {
           stringBuilder.append(c);
       }
      return stringBuilder.toString();
   }

   public static void main(String[] args) 
   {
       Scanner sobj=new Scanner(System.in);

       System.out.println("Enter the string:");
       String str = sobj.nextLine();

       System.out.println("Enter a character to be remove from the string");
       Character character = sobj.next().charAt(0);

       System.out.println("Output after removing character is: "+removeOccurences(str,character));
   }

}