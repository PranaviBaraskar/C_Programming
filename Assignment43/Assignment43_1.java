/*
    Problem Statement : 1. Write a java program which accept two arrays from 
                                user and return difference between summation of arrays.
*/

import java.util.*;

class ArrayX
{
    public int Arr[];
    public int Brr[];

    ArrayX(int iSize1, int iSize2)
    {
        Arr = new int[iSize1];
        Brr = new int[iSize2];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;

        System.out.println("Enter the elements of First Array : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter the elements of Second Array : ");
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            Brr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;

        System.out.println("Elements of First Array : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();

        System.out.println("Elements of Second Array : ");
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.print(Brr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class MyArray extends ArrayX
{
    MyArray(int iSize1,int iSize2)
    {
        super(iSize1,iSize2);

    }

    public int DiffArray()
    {
        int iCnt = 0;
        int SumArr = 0;
        int SumBrr = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            SumArr = SumArr + Arr[iCnt];
        }
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            SumBrr = SumBrr + Brr[iCnt];
        }
        return (SumArr - SumBrr);
        
    }
}

class Assignment43_1

{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Size of first Array : ");
        int iSize1 = sobj.nextInt();

        System.out.println("Enter the Size of Second Array : ");
        int iSize2 = sobj.nextInt();

        MyArray obj = new MyArray(iSize1,iSize2);

        obj.Accept();
        obj.Display();
        int iRet = obj.DiffArray();

        System.out.println("Diffrence between of Arrays Summation : "+iRet);
    }
}