//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statements : Accept one number and check whether it is divisible by 5 or not.
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Check
//    Input             :   integer
//    Output            :   return True/False
//    Description       :   check number is divisible by 5 or not, using Typedef
//    Author            :   Pranavi Ghanshyaam Baraskarr
//    Date              :   24.4.2023
//
//////////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE )
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }
    return 0;

}