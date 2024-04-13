/*
    Problem Statement : 4. Write java program which accept N numbers from user and accept
                            Range, Display all elements from that range
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

    public void DisplayRange(int iStart, int iEnd)
    {
        System.out.println("Elements between "+iStart+" to "+iEnd+" are : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
            {
                System.out.println(Arr[iCnt]);
            }
        }
        
    }
}

class Assignment36_4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the size of Array : ");
        int iSize = sobj.nextInt();

        System.out.println("Enter the start range : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter the end range : ");
        int iValue2 = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);

        mobj.Accept();
        mobj.Display();
        mobj.DisplayRange(iValue1, iValue2);    
    }
}