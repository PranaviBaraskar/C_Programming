////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement 1 :  Design application for hotel. According to the management team of hotel they are giving
//                           discount on total bill amount of customer.
//                           If bill amount is less than 500 then there is no discount,
//                           if bill is less than 1500 and more than 500 they give 10% discount,
//                           And if bill amout is more tham 1500 then they give 15% discount.
//                          
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   CalculateBill
//    Input             :   integer, integer
//    Output            :   integer
//    Description       :   Display income tax
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   14.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float CalculateBill(float iNo)
{
   float iPercent = 0.0f ;

   if(iNo < 500)
   {
      iPercent = iNo;
   }
   else if(iNo > 1500)
   {
      iPercent = (iNo * 15) /100;
      iPercent = iNo - iPercent;
   }
   else if((iNo > 500) || (iNo < 1500))
   {
      iPercent = (iNo * 10) /100;
      iPercent = iNo - iPercent;
   }

   
   return (int)iPercent;
   
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   float iValue = 0.0f;
   int iRet = 0.0f;

   printf("Enter your bill amount to check discount : \n");
   scanf("%f",&iValue);

   iRet = CalculateBill(iValue);

   if(iRet == iValue)
   {
      printf("Discount is not applicable on your bill\n");
      printf("Payable bill : %d\n",iRet);
   }
   else
   {
      printf("Discounted bill : %d\n",iRet);

   }

   
   return 0;
}