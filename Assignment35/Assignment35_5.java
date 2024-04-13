/*
        Problem Statement :    5.Write a program which accept number from user and return difference
                                 between summation of even digits and summation of odd digits.
*/

import java.util.*;

class Digit
{
    private int temp;

    Digit(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        temp = iNo;
    }
    public int CountDiff()
    {
        int iDigit = 0;
        int iEven = 0, iOdd = 0;

        while(temp != 0)
        {
            iDigit = temp % 10;
            if((iDigit % 2) == 0)
            {
                iEven = iEven + iDigit;
            }
            else if((iDigit % 2) != 0)
            {
                iOdd = iOdd + iDigit;
            }
            temp = temp / 10;
        }
        return (iEven - iOdd);
    }
}

class Assignment35_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number ");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit(iValue);

        int iRet = dobj.CountDiff();

        System.out.println("Difference between Summation of Even And Odd digits\n of given number is : "+iRet);

    }
}