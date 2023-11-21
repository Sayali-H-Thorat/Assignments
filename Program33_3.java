////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a java program which accept number from user and display the count of digits in between 3 and 7
//
//Input:  2395
//Output: 1
//
//Input:  1018
//Output: 0
//
//Input:  4521
//Output: 2
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class DigitsX
{
    public int CountThreeAndSeven(int iValue)
    {
        int iCnt = 0;
        int iDigit = 0;

        while(iValue != 0)
        {
            iDigit = iValue%10;
            if((iDigit >3) &&(iDigit < 7))
            {
                iCnt++;
            }

            iValue = iValue/10;
        }
        return iCnt;

    }

}
class Program33_3
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number:");
        int iNo = sobj.nextInt();

        DigitsX dobj = new DigitsX();

        int iRet = dobj.CountThreeAndSeven(iNo);

        System.out.println("Count of digits between 3 and 7 is: " +iRet);
    }
}