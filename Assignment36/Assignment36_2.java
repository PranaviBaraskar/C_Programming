/*
    Problem Statement : 2. Write java program which accept N numbers from user and accept one another number as NO,
                             return index of first occurrence of that
NO.
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

    public int FirstOcc(int iNo)
    {
        int iCnt = 0;
        final int ERR_NOTFOUND = -1;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                break;
            }
        }
        if(iCnt == Arr.length)
        {
            return ERR_NOTFOUND;
        }
        else
        {
            return iCnt;
        }
        
    }
}

class Assignment36_2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the size of Array : ");
        int iSize = sobj.nextInt();

        System.out.println("Enter the number for index number : ");
        int iValue = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);

        mobj.Accept();
        mobj.Display();
        int iRet = mobj.FirstOcc(iValue);

        if(iRet == -1)
        {
            System.out.println("There is no element present in array");
        }
        else
        {
            System.out.println("First Occurrence of "+iValue+" is on index no. "+iRet);
        }

        
    }
}