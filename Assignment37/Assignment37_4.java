/*
    Problem Statement : 4. Accept sing from user and reverse the contents of that 
                            string by toggling the case.
*/

import java.util.*;

class StringX
{
    public char Arr[];

    StringX(String Str)
    {
        Arr = Str.toCharArray();
    }

    public String CheckString()
    {
        int iCnt = 0;
        int iStart = 0;
        int iEnd = Arr.length-1;
        char Temp = ' ';
        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
            else if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32);
            }

            while(iStart < iEnd)
            {
                Temp = Arr[iStart];
                Arr[iStart] = Arr[iEnd];
                Arr[iEnd] = Temp;

                iStart++;
                iEnd--;
            }
        }
        return new String(Arr);
    }
}


class Assignment37_4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Frist String: ");
        String Name1 = sobj.nextLine();

        StringX obj = new StringX(Name1);

        String sRet = obj.CheckString();
        
        System.out.println("Toggled and Reverse String is : "+sRet);
    }
}