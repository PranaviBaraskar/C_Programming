/*
        Problem Statement : 2.Write a program which accept number from user and 
                                return the count of odd digits.
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
    public int OddDigits()
    {
        int iDigit = 0;
        int iCount = 0;

        while(temp != 0)
        {
            iDigit = temp % 10;
            if((iDigit % 2) !=  0)
            {
                iCount++;
            }
            temp = temp / 10;
        }
        return iCount;
    }
}

class Assignment35_2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number ");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit(iValue);

        int iRet = dobj.OddDigits();

        System.out.println("Odd Digits in given number is : "+iRet);

    }
}