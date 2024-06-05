/*
    Problem Statement : 5. Accept string from user and check whether 
                            the string is palindrome or not without considering its case.
*/

import java.util.*;

class StringX
{
    public char Arr[];

    StringX(String Str)
    {
        Arr = Str.toCharArray();
    }

    public boolean CheckString()
    {
        int iCnt = 0;
        int iStart = 0;
        int iEnd = Arr.length-1;
        boolean bFlag = true;
        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
        }

        for(iCnt = 0; iCnt < (Arr.length/2); iCnt++)
        {
            while(iStart < iEnd)
            {
                if(Arr[iStart] != Arr[iEnd])
                {
                    bFlag = false;
                    break;
                }

                iStart++;
                iEnd--;
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


class Assignment37_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Frist String: ");
        String Name1 = sobj.nextLine();

        StringX obj = new StringX(Name1);

        boolean bRet = obj.CheckString();
        
        if(bRet == true)
        {
            System.out.println("String is Pallindrom : ");
        }
        else
        {
            System.out.println("String is not Pallindrom : ");
        }
        
    }
}