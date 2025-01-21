/*
    Problem Statement : 5. Write Java program which accept two arrays from user and 
                            display summation of each array.
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

    public void SumArray()
    {
        int iCnt = 0;
        int iSum = 0;

        System.out.println("Elements of First Array : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println("\nSummation of First Array Elements : "+iSum);

        iSum = 0;

        System.out.println("Elements of Second Array : ");
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            iSum = iSum + Brr[iCnt];
            System.out.print(Brr[iCnt]+"\t");
        }
        System.out.println("\nSummation of second Array Elements : "+iSum);
    }
}

class Assignment42_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Size of first Array : ");
        int iSize1 = sobj.nextInt();

        System.out.println("Enter the Size of Second Array : ");
        int iSize2 = sobj.nextInt();

        ArrayX obj = new ArrayX(iSize1,iSize2);

        obj.Accept();
        obj.SumArray();

    }
}