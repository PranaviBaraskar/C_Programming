/*
        Problem Statement : 1. Write Java program which accept N numbers from user and return difference between summation of even 
                                elements and summation of odd elements.
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
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements of array : ");

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

    public int Difference()
    {
        int iEven = 0;
        int iOdd = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iEven = iEven + Arr[iCnt];
            }
            else if((Arr[iCnt] % 2) != 0)
            {
                iOdd = iOdd + Arr[iCnt];
            }
        }
        return (iEven - iOdd);
    }

}

class Assignment34_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Size of Array : ");
        int iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);

        mobj.Accept();
        mobj.Display();
        int iRet = mobj.Difference();

        System.out.println("Summation of even and odd elements is : "+iRet);
    }
}