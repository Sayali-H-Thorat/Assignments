////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a java program which accept number from user and return difference between summation of even digits and summation of odd digits 
//
//
//Input:  2395
//Output: -15   (2-17)
//
//Input:  1018
//Output: 6  (8-2)
//
//Input: 8440
//Output: 16 (16-0)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class DigitsX
{
    public int CountDifference(int iValue)
    {
        

        int iEvenCnt = 0;
        int iOddCnt = 0;
        int iDigit = 0;
        int iDiff = 0;

        while(iValue != 0)
        {
            iDigit = iValue%10;
            if((iDigit % 2) == 0)
            {
                iEvenCnt = iEvenCnt + iDigit;
            }
            else
            {
                iOddCnt = iOddCnt + iDigit;
            }

            iValue = iValue/10;
        }
        iDiff = iEvenCnt - iOddCnt;
        return iDiff;

    }

}
class Program33_5
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number:");
        int iNo = sobj.nextInt();

        DigitsX dobj = new DigitsX();

        int iRet = dobj.CountDifference(iNo);

        System.out.println("Difference between odd and even digits is: " +iRet);
    }
}