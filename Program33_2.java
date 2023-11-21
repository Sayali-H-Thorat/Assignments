////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a java program which accept number from user and return the count of odd digits
//
//Input:  2395
//Output: 3
//
//Input:  1018
//Output: 2
//
//Input:  -1018
//Output: 2
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class DigitsX
{
    public int CountOdd(int iValue)
    {
        int iCnt = 0;
        int iDigit = 0;

        while(iValue != 0)
        {
            iDigit = iValue%10;
            if((iDigit % 2) != 0)
            {
                iCnt++;
            }

            iValue = iValue/10;
        }
        return iCnt;

    }

}
class Program33_2
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number:");
        int iNo = sobj.nextInt();

        DigitsX dobj = new DigitsX();

        int iRet = dobj.CountOdd(iNo);

        System.out.println("Odd digits count from " + iNo + " is : " +iRet);
    }
}