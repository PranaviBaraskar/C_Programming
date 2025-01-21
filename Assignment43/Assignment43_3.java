/*
    Problem Statement : 3. Write a java program which accept two array from user and copy the 
                            contents of that array into another array in reverse order and return new array.
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

    public int CountElement()
    {
        int iCount = (Arr.length + Brr.length);
        return iCount;
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
    public int newArr[];
    MyArray(int iSize1,int iSize2)
    {
        super(iSize1,iSize2);

        int iCount = CountElement();
        newArr = new int[iCount];
    }
    public int[] CopyArrayRev()
    {
        int iCnt = 0;
        int i = 0;
        int iStart = 0, iEnd = 0, iTemp = 0;
        iEnd = newArr.length-1;

        for(iCnt = 0; iCnt < Arr.length; iCnt++,i++)
        {
            newArr[i] = Arr[iCnt];
        }
        for(iCnt = 0; iCnt < Brr.length; iCnt++,i++)
        {
            newArr[i] = Brr[iCnt];
        }

        while(iStart < iEnd)
        {
            iTemp = newArr[iStart];
            newArr[iStart] = newArr[iEnd];
            newArr[iEnd] = iTemp;

            iStart++;
            iEnd--;
        }

        return newArr;
        
    }
}

class Assignment43_3
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
        int ArrRet[] = obj.CopyArrayRev();

        System.out.println("Reverse Array : ");
        for(int iCnt = 0; iCnt < ArrRet.length; iCnt++)
        {
            System.out.print(ArrRet[iCnt]+"\t");
        }
        System.out.println();
    }
}