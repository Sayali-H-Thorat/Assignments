////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a java program which accept number from user and return multiplication of all digits
//
//
//Input:  2395
//Output: 270
//
//Input:  1018
//Output: 8
//
//Input:  9440
//Output: 144
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class DigitsX
{
    public int DigitsMultiplication(int iValue)
    {
        int iDigit = 0;
        int iMult = 1;

        while(iValue != 0)
        {
            iDigit = iValue%10;
            
            iMult = iMult * iDigit;

            iValue = iValue/10;
        }
        return iMult;

    }

}
class Program33_4
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number:");
        int iNo = sobj.nextInt();

        DigitsX dobj = new DigitsX();

        int iRet = dobj.DigitsMultiplication(iNo);

        System.out.println("Multiplication of digits is: " +iRet);
    }
}