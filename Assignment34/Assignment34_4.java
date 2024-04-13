/*
        Problem Statement : 4. Write Java program which accept N numbers from user and
                                display all such elements which are divisible by 3 and 5.
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

    public void Divisible()
    {
        System.out.println("Elements which are divisible by 3 and 5 : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(((Arr[iCnt] % 3) == 0) && ((Arr[iCnt] % 5) == 0))
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
        System.out.println();
       
    }

}

class Assignment34_4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Size of Array : ");
        int iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);

        mobj.Accept();
        mobj.Display();
        mobj.Divisible();

    }
}