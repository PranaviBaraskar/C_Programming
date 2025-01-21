/*
    Problem Statement : 5. Write a java program which accept two array from user and 
                            check whether that array and its elements are palindrome or not.
*/

import java.util.*;

class ArrayX
{
    public int Arr[];

    ArrayX(int iSize1)
    {
        Arr = new int[iSize1];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;

        System.out.println("Enter the elements of Array : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

    }

    public void Display()
    {
        int iCnt = 0;

        System.out.println("Elements of Array : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();

    }
}

class MyArray extends ArrayX
{
    MyArray(int iSize1)
    {
        super(iSize1);
    }

    public boolean PallindromeArray()
    {
        int iTemp = 0;
        int iCnt = 0;
        int iDigit = 0, iReverse = 0;
        int ElementCnt = 0, ArrayCnt = 0;
        int iStart = 0, iEnd = 0;

        iEnd = Arr.length-1;

        for(iCnt = 0; iCnt < Arr.length; iCnt ++)
        {
            iTemp = Arr[iCnt];
            while(iTemp != 0)
            {
                iDigit = iTemp % 10;
                iReverse = (iReverse * 10) + iDigit;
                iTemp = iTemp / 10;
            }
            if(iReverse == Arr[iCnt])
            {
                ElementCnt++;
            }
            iReverse = 0;
            iDigit = 0;
        }
        for(iCnt = 0; iCnt < (Arr.length/2); iCnt++)
        {
            if(Arr[iStart] == Arr[iEnd])
            {
                ArrayCnt++;
            }
            iStart++;
            iEnd--;
        }

        if((ElementCnt == Arr.length) && (ArrayCnt == (Arr.length/2)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Assignment43_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Size of first Array : ");
        int iSize1 = sobj.nextInt();

        MyArray obj = new MyArray(iSize1);

        obj.Accept();
        obj.Display();
        boolean bRet = obj.PallindromeArray();

        if(bRet == true)
        {
            System.out.println("Array are Pallindrome.");
        }
        else
        {
            System.out.println("Array are not Pallindrome.");
        }
        
    }
}