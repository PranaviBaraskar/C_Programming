/*
    Problem Statement : 4. Write Java program below pattern.
                            which accept String from user and display
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

    void Display(String Str)
    {
        System.out.println(Str);
        char Arr[] = Str.toCharArray();

        int i = 0, j = 0;

        for(i = iRow; i > 1; i--)
        {
            for(j = 0; j < iCol; j++)
            {
                if(j < i)
                {
                    System.out.print(Arr[j]+"\t");
                }
                else
                {
                    System.out.print("\t");
                }
                
            }
            System.out.println();
        }

        for(i = 1; i <= iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(j < i)
                {
                    System.out.print(Arr[j]+"\t");
                }
                else
                {
                    System.out.print("\t");
                }
                
            }
            System.out.println();
        }
    }
}

class Assignment40_4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String to display like pattern :");
        String Name = sobj.nextLine();

        System.out.println("Enter the rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter the column : ");
        int iValue2 = sobj.nextInt();

        Pattern obj = new Pattern(iValue1,iValue2);
        obj.Display(Name);

    }
}