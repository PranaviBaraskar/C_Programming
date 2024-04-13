/*
         Problem Statment :   5. Write a java program which accept string from user 
                                 and display it in reverse order.
*/

import java.util.*;

class StringX
{
    public String Reverse(String str)
    {
        char Arr[] = str.toCharArray(); 
        int iStart = 0;
        int iEnd = Arr.length-1;
        char ctemp = ' ';

        while(iStart < iEnd)
        {
            ctemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = ctemp;

            iStart++;
            iEnd--;
        }
        return new String(Arr);
    }
}

class Assignment33_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String Name = sobj.nextLine();

        StringX obj = new StringX();

        String sRet = obj.Reverse(Name);
        System.out.println("Reverse string is : "+sRet);

    }
}