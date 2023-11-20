////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Write a program which accept one number and two position from user and 
//                          and check whether bit at first or bit at second position is ON or OFF.
//                                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

class DesginMask
{
   private :
      UINT iNo;
      UINT iPos1, iPos2;
      UINT iMask, iMask1, iMask2;
      UINT iResult1, iResult2;

   public :

      DesginMask(UINT X, UINT A, UINT B)
      {
         iNo = X;
         iPos1 = A;
         iPos2 = B;
         iResult1 = 0;
         iResult2 = 0;
      }

      bool CheckBit()
      {
         iMask1 = 0X00000001;
         iMask2 = 0X00000001;

         iMask1 = iMask1 << (iPos1-1);
         iMask2 = iMask2 << (iPos2-1);

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
   UINT iBit1 = 0, iBit2 = 0;
   bool bRet = false;

   cout<<"Enter the Number\n";
   cin>>iValue;

   cout<<"Enter the Position of bit\n";
   cin>>iBit1;

   cout<<"Enter the Position of bit\n";
   cin>>iBit2;

   DesginMask obj(iValue,iBit1,iBit2);
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
