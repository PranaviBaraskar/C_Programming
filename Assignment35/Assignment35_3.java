/*
        Problem Statement : 3.Write a program which accept number from user and return the count of 
                            digits in between 3 and 7.
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
    public int CountDigit()
    {
        int iDigit = 0;
        int iCount = 0;

        while(temp != 0)
        {
            iDigit = temp % 10;
            if((iDigit > 3) && (iDigit < 7))
            {
                iCount++;
            }
            temp = temp / 10;
        }
        return iCount;
    }
}

class Assignment35_3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number ");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit(iValue);

        int iRet = dobj.CountDigit();

        System.out.println("Digits between 3 to 7 in given number is : "+iRet);

    }
}