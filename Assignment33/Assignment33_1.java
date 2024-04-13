/*
         Problem Statment :  1.Write a Java program which accept string from user 
                                and count number of capital characters.
*/

import java.util.*;

class StringX
{
    public int CountCapital(String str)
    {
        char Arr[] = str.toCharArray(); 

        int iCount = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Assignment33_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String Name = sobj.nextLine();

        StringX obj = new StringX();

        int iRet = obj.CountCapital(Name);

        System.out.println("Capital Letter Present in String are : "+iRet);
    }
}