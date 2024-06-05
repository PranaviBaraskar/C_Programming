/*
    Problem Statement : 1. Write a java program which accepts 2 strings from user and 
                            concat N characters of second string after first string. 
                              Value of N should be accepted from user.
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

    public String ConcateString(int iNo)
    {
        int iCnt = 0;
        int i = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++,i++)
        {
            newArr[i] = Arr[iCnt];
        }

        newArr[i] = ' ';
        i++;

        for(iCnt = 0; iCnt < iNo; iCnt++,i++)
        {
            newArr[i] = Brr[iCnt];
        }
        return new String(newArr);
        
    }
}


class Assignment37_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Frist String: ");
        String Name1 = sobj.nextLine();

        System.out.println("Enter the Second String : ");
        String Name2 = sobj.nextLine();

        System.out.println("Enter the number to Character to copy from second String : ");
        int iValue = sobj.nextInt();

        StringX obj = new StringX(Name1,Name2);

        String sRet = obj.ConcateString(iValue);

        System.out.println("Updated String After Concate : "+sRet);
        
        System.out.println();
    }
}