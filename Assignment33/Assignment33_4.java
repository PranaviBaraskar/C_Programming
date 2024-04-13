/*
         Problem Statment :   4. Write a java program which accept string from user 
                                 and check whether it contains vowels in it or not.
*/

import java.util.*;

class StringX
{
    public boolean CheckVowels(String str)
    {
        char Arr[] = str.toCharArray(); 
        int iCheck = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] == 'A') || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'O') || (Arr[iCnt] == 'U'))
            {
                iCheck++;
            }
            else if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'u'))
            {
                iCheck++;
            }
        }
        if(iCheck != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
}

class Assignment33_4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String Name = sobj.nextLine();

        StringX obj = new StringX();

        boolean bRet = obj.CheckVowels(Name);

        if(bRet == true)
        {
            System.out.println("Vowels is present in String");
        }
        else
        {
            System.out.println("Vowels is not present in String");
        }
    }
}