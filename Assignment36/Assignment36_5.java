/*
    Problem Statement : 5. Write java program which accept N numbers from user and
                             return product of all odd elements.
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

    public int Product()
    {
        int iSum = 1;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] %2) != 0)
            {
                iSum = iSum * Arr[iCnt];
            }
            
        }
        return iSum;   
    }
}

class Assignment36_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the size of Array : ");
        int iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);

        mobj.Accept();
        mobj.Display();
        int iRet = mobj.Product();    

        System.out.println("Product of all odd elemenst : "+iRet);
    }
}