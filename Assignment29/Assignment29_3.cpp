////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Write a program which accept one number from user and 
//                          check whether 9th or 12th bit is ON or OFF.
//                                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

class DesginMask
{
   private :
      UINT iNo;
      UINT iMask, iMask1, iMask2 ;
      UINT iResult1, iResult2;

   public :

      DesginMask(UINT X)
      {
         iNo = X;
         iResult1 = 0;
         iResult2 = 0;
      }

      bool CheckBit()
      {
         iMask1 = 0X100;
         iMask2 = 0X800;

         iResult1 = iMask1 & iNo;
         iResult2 = iMask2 & iNo;

         if((iResult1 == iMask1) || (iResult2 == iMask2))
         {
            return true;
         }
         else
         {
            return false;
         }
      }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   UINT iValue = 0;
   bool bRet = false;

   cout<<"Enter the Number\n";
   cin>>iValue;

   DesginMask obj(iValue);
   bRet = obj.CheckBit();

   if(bRet == true)
   {
      cout<<"Bit is ON"<<"\n";
   }
   else
   {
      cout<<"Bit is OFF"<<"\n";
   }

   return 0;
}
