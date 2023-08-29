////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement 4 : We have to design application for tourist company.
//                          Tourist company provides cars on rent. Depends on the running of car they apply rent.
//                          If running is less than 100 kilometers then they charge 25 rupees per kilometer.
//                          And if running is more than 100 kilometer then they apply 15 rupees per kilometer after
//                          100 kilometers.
//                          We have to accept number of kilometers from user and return the estimate rent.
//                          
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   TouristBill
//    Input             :   integer, integer
//    Output            :   integer
//    Description       :   Display the rent as per km
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   18.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int TouristBill(int iKm)
{
   int iBill = 0;

   if(iKm <= 100)
   {
      iBill = iKm * 25;
   }
   else
   {
      iBill = iKm - 100;
      iBill = iBill * 15 + (100 * 25);
   }

   return iBill;
   
   
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

   printf("Enter your kilometers :\n");
   scanf("%d",&iValue);

   iRet = TouristBill(iValue);

   printf("Your rent of %d kilometers is : %d\n",iValue,iRet);
   
   return 0;
}