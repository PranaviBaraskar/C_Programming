/*
    Problem Statement : 1. Write Java program which accept number of rows and number of columns 
                            from user and display below pattern.
*/

import java.util.*;

class Pattern
{
    private int iRow;
    private int iCol;

    Pattern(int Y, int Z)
    {
        iRow = Y;
        iCol = Z;
    }
    public void Display()
    {
        int i = 0;
        int j = 0;
        char ch = ' ';

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1,ch = 'A'; j <= iCol; j++,ch++)
            {
                System.out.print(ch+"\t");
            }   
            System.out.println();
        }
    }
}
class Assignment38_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter the columns : ");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern(iValue1,iValue2);
        pobj.Display();
    }
}