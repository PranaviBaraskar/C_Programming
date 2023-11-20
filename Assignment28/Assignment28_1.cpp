////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Write a program which accept one number and position from user and check whether bit at
//                          that position is on or off. It bit is one return true otherwise return false.
//                                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;
     
class DesginMask
{
   private : 
      UINT iNo;
      UINT iMask;
      UINT iResult;
      UINT iPos;

   public :
      DesginMask(UINT X, UINT Y)
      {
         iNo = X;
         iPos = Y;
         iResult = 0;
      }

      bool CheckBit()
      {
         iMask = 0X00000001;

         iMask = iMask << (iPos-1);

         iResult = iNo & iMask;

         if(iResult == iMask)
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
   UINT iValue1 = 0;
   UINT iValue2 = 0;
   bool bRet = false;

   cout<<"Enter the Number\n";
   cin>>iValue1;

   cout<<"Enter the Number to check bit\n";
   cin>>iValue2;

   DesginMask obj(iValue1, iValue2);
   bRet = obj.CheckBit();

   if(bRet == true)
   {
      cout<<"Bits is ON\n";
   }
   else
   {
      cout<<"Bits is OFF\n";
   }

   return 0;
}


// input :     10    2
