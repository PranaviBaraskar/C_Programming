///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement 2 : Accept single digit number from user and print it into word.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Display
//    Input             :   integer
//    Output            :   nothing returns
//    Description       :   Display number in word format
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   04.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{  
    int iCnt = 0;

    if(iNo > 9)
    {
        printf("Please Enter Number between 1 to 9\n");
        return;
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if(iNo == 1)
    {
        printf("One\n");
    }
    else if(iNo == 2)
    {
        printf("Two\n");
    }
    else if(iNo == 3)
    {
        printf("Three\n");
    }
    else if(iNo == 4)
    {
        printf("Four\n");
    }
    else if(iNo == 5)
    {
        printf("Five\n");
    }
    else if(iNo == 6)
    {
        printf("Six\n");
    }
    else if(iNo == 7)
    {
        printf("Seven\n");
    }
    else if(iNo == 8)
    {
        printf("Eight\n");
    }
    else if(iNo == 9)
    {
        printf("Nine\n");
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

   Display(iValue);

   return 0;
}