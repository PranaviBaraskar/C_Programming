/*
         Problem Statment :   3. Write a java program which accept string from user and 
                                    return difference between frequency of 
                                    small characters and frequency of capital characters.
 */

import java.util.*;

class StringX
{
    public int CountFrequency(String str)
    {
        char Arr[] = str.toCharArray(); 

        int iCountCapital = 0;
        int iCountSmall = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCountCapital++;
            }
            else if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCountSmall++;
            }
        }
        return (iCountSmall - iCountCapital);
    }
}

class Assignment33_3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String Name = sobj.nextLine();

        StringX obj = new StringX();

        int iRet = obj.CountFrequency(Name);

        System.out.println("Difference between Frequency of small and capital \ncharacters in String are : "+iRet);
    }
}