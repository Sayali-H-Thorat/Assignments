//Problem Statement: Write a java program which accept two strings from user and check whether first string is the rotation of second string or not
// Input: abcdefg   cdefgab
//        
//Output: True
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

public class Program45_1  
{  
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in); 

        System.out.println("Enter the first string:");
        String str1 = sobj.nextLine();

        System.out.println("Enter the second string:");
        String str2 = sobj.nextLine();

        if(str1.length() != str2.length())
        {  
            System.out.println("Second string is not a rotation of first string.");  
        }  
        else
        {
            str1 = str1.concat(str1);  
            
            if(str1.indexOf(str2) != -1)
            {
                System.out.println("Second string is a rotation of first string.");
            }
            else
            {
                System.out.println("Second string is not a rotation of first string."); 
            }  
                 
        }  
    }  
} 