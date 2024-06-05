/*
    Problem Statement : 2. Write Java program which accept number of rows and number of columns
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
        char Ch1 = ' ';
        char Ch2 = ' ';
        
        for(i = 1; i <= iRow; i++)
        { 
            for(j = 1,Ch1 = 'A',Ch2 = 'a'; j <= iCol; j++, Ch1++, Ch2++)
            {
                if((i % 2) == 0)
                {
                    System.out.print(Ch2+"\t");
                }
                else
                {
                    System.out.print(Ch1+"\t");
                }
            }   
            System.out.println();
        }
    }
}
class Assignment38_2
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