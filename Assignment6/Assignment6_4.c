///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statements 4 : Write a progarm which accept number from user and display its table.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Table
//    Input             :   integer
//    Output            :   nothing returns
//    Description       :   Display table of given input
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   04.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{  
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iSum = iNo * iCnt;
        printf("%d\n",iSum);
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   int iValue = 0;
   

   printf("Enter Number\n");
   scanf("%d",&iValue);

   Table(iValue);

   return 0;
}