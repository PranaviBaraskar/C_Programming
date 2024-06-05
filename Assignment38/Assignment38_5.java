/*
    Problem Statement : 5. Write Java program which accept number of rows and number of 
                            columns from user and display below pattern.
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
        int iCnt = 1;
        
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++, iCnt++)
            {
                System.out.print(iCnt+"\t");
            }   
            System.out.println();
        }
    }
}
class Assignment38_5
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