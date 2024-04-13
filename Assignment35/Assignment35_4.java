/*
        Problem Statement :   4.Write a program which accept number from user and 
                                return multiplication of all digits.
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
    public int Multiply()
    {
        int iDigit = 0;
        int iSum = 1;

        while(temp != 0)
        {
            iDigit = temp % 10;
            iSum = iSum * iDigit;
            temp = temp / 10;
        }
        return iSum;
    }
}

class Assignment35_4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number ");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit(iValue);

        int iRet = dobj.Multiply();

        System.out.println("Multiplication of digits of given number is : "+iRet);

    }
}