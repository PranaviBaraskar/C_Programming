////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement 3 :  Design application for school management system. 
//                           As school is primary there are 4 standards from 1 to 4.
//                           School fess fo each standard is different. For first standar fees are 8900,
//                           for second standard 12790, for third standard 21000 and for fourth standard fees are 23450.
//                           We have to accept standard from user and display the corresponding fees.
//                          
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   SchoolFees
//    Input             :   integer, integer
//    Output            :   integer
//    Description       :   Display the school fees
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   18.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SchoolFees(int iStandard)
{
   int iFees = 0;
   if((iStandard > 4) || (iStandard < 0))
   {
      printf("Please enter valid standard\n");
      return 0;
   }
   if(iStandard == 1 )
   {
      iFees = 8900;
   }
   else if(iStandard == 2)
   {
      iFees = 12790;
   }
   else if(iStandard == 3)
   {
      iFees = 21000;
   }
   else if(iStandard == 4)
   {
      iFees = 23450;
   }
   
   return iFees;
   
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter your Standard :\n");
   scanf("%d",&iValue);

   iRet = SchoolFees(iValue);

   if(iRet != 0)
   {
      printf("Fees of standard %d is : %d\n",iValue,iRet);
      
   }
   
   return 0;
}