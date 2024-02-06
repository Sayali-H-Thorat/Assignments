//Problem Statement: Write a java program which accept expression from user. Check whether the expressionn is balanced parenthesised or not(Expression should contains circular brackets only)
// Input: (a+(f-g)*2(a-d))
//        
//Output: True
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

public class Program45_5
{
   public static void main(String[] args)
   {
      String expression;
      int i, length;
      char ch;
      Scanner s = new Scanner(System.in);
      
      System.out.println("Enter the Expression: ");
      expression = s.nextLine();
      
      Stack<Character> stack = new Stack<Character>();
      length = expression.length();
      
      for(i=0; i<length; i++)
      {
         ch = expression.charAt(i);
         if(ch=='(')
         {
            stack.push(ch);
         }
         else if(ch==')')
         {
            if(stack.isEmpty() || stack.pop() != '(')
            {
               System.out.println("Unbalanced Parentheses!");
               return;
            }
         }
         else if(ch=='}' || (ch==']'))
         {
            if(stack.isEmpty() || stack.pop() != '{')
            {
                if(stack.isEmpty() || stack.pop() != '[')
                {
                    System.out.println("Wrong Parentheses!");
                    return;

                }
               
            }
         }
      }
      if(stack.isEmpty())
         System.out.println("Balanced Parentheses.");
   }
}