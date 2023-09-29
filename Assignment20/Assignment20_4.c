////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Accept Character from user and check whether it is small case or not (a-z).
//                          
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   CheckSmall
//    Input             :   Character
//    Output            :   boolean(True/False)
//    Description       :   check the given alphabate is small case or not
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :  
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckSmall(char CH)
{
   char iCnt = '\0';
   BOOL bFlag = FALSE;

   if((CH >= 'a') && (CH <= 'z'))
   {
      bFlag = TRUE;
   }
   else
   {
      bFlag = FALSE;
   }

   return bFlag;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   char cValue = '\0';
   BOOL bRet = FALSE;

   printf("Enter the alphabet to check :\n");
   scanf("%c",&cValue);

   bRet = CheckSmall(cValue);

   if(bRet == TRUE)
   {
      printf("%c Alphabhet is Small Case Character\n",cValue);
   }
   else
   {
      printf("%c Alphabhet is not Small Case Character\n",cValue);
   }

   return 0;
}
