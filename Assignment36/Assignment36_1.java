/*
    Problem Statement : 1. Write java program which accept N numbers from user and accept one another number as NO,
                             check whether NO is present or rot.
*/

import java.util.*;

class ArrayX
{
    protected int Arr[];

    ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements of array : ");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of array are : ");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class MyArray extends ArrayX
{
    MyArray(int iSize)
    {
        super(iSize);
    }

    public boolean Check(int iNo)
    {
        int iCount = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                iCount++;
                break;
            }
        }
        if(iCount == 1)
        {
            return true;
        }
        else 
        {
            return false;
        }

    }
}

class Assignment36_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the size of Array : ");
        int iSize = sobj.nextInt();

        System.out.println("Enter the number that you want to check : ");
        int iValue = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);

        mobj.Accept();
        mobj.Display();
        boolean bRet = mobj.Check(iValue);

        if(bRet == true)
        {
            System.out.println(iValue+" is present in Array");
        }
        else 
        {
            System.out.println(iValue+" is not present in Array");
        }


    }
}