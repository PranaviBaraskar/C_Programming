/*
    Problem Statement : 3. Write a program which 2 strings from user and check whether first N 
                            contents of two strings are equal or not.
*/

import java.util.*;

class StringX
{
    public char Brr[];
    public char Arr[];
    public char newArr[];

    StringX(String Str, String dest)
    {
        Arr = Str.toCharArray();
        Brr = dest.toCharArray();

        int iSize = (Arr.length + Brr.length);

        newArr = new char[iSize];
    }

    public boolean CheckString(int iNo)
    {
        int iCnt = 0;
        int iEqual = 0;
        int iSize = 0;

        if((iNo > Arr.length) && (iNo > Brr.length))
        {
            if(Arr.length > Brr.length)
            {
                iSize = Arr.length;
            }
            else
            {
                iSize = Brr.length;
            }
        }
        else
        {
            iSize = iNo;
        }

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] != Brr[iCnt])
            {
                iEqual++;
                break;
            }
        }

        if(iEqual == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
}


class Assignment37_3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Frist String: ");
        String Name1 = sobj.nextLine();

        System.out.println("Enter the Second String : ");
        String Name2 = sobj.nextLine();

        System.out.println("Enter the number of Charaters you want to check : ");
        int iValue = sobj.nextInt();

        StringX obj = new StringX(Name1,Name2);

        boolean bRet = obj.CheckString(iValue);

        if(bRet == true)
        {
            System.out.println("First "+iValue+" are equal : ");
        }
        else
        {
            System.out.println("First "+iValue+" are not equal : ");
        }
        
        
        
    }
}