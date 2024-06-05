/*
    Problem Statement : 2. Write a program which 2 strings from user and 
                            check whether contents of two strings are equal or not.
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

    public boolean CheckEqualString()
    {
        int iCnt = 0;
        boolean bFlag = true;
        int iSize = 0;

        if(Arr.length > Brr.length)
        {
            iSize = Arr.length;
        }
        else
        {
            iSize = Brr.length;
        }

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] != Brr[iCnt])
            {
                bFlag = false;
                break;
            }
        }

        if(bFlag == true)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
}


class Assignment37_2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Frist String: ");
        String Name1 = sobj.nextLine();

        System.out.println("Enter the Second String : ");
        String Name2 = sobj.nextLine();

        StringX obj = new StringX(Name1,Name2);

        boolean bRet = obj.CheckEqualString();

        if(bRet == true)
        {
            System.out.println("String are equal : ");
        }
        else
        {
            System.out.println("String are not equal : ");
        }
        
        
        
    }
}