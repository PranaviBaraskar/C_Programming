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
//    Input             :   float, float
//    Output            :   integer
//    Description       :   Display discounted bill
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   18.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float CalculateBill(float iAmount)
{
   float iPercent = 0.0f ;

   if(iAmount < 500)
   {
      iPercent = iAmount;
   }
   else if(iAmount > 1500)
   {
      iPercent = (iAmount * 15) /100;
      iPercent = iAmount - iPercent;
   }
   else if((iAmount > 500) || (iAmount < 1500))
   {
      iPercent = (iAmount * 10) /100;
      iPercent = iAmount - iPercent;
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