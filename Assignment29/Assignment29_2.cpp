////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :    Write a program which accept one number from user and toggle contents of first and 
//                            last nibble of the number. Return modified number. (Nibble is a group of four bits)
//                                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;
     
class DesginMask
{
   private : 
      UINT iNo1, iNo2;
      UINT iMask, ResetMask, iResult;
      UINT iCnt, iCount, iPos;

   public :
      DesginMask(UINT X, UINT Y)
      {
         iNo1 = X;
         iNo2 = Y;
         iResult = 0;
         iCount = 0;
      }

      void ToggleBit()
      {
         iMask = 0X00000001;
         ResetMask = iMask;
         iCnt = 0;
         iPos = 1;

         for(iCnt = 0; iCnt < 32; iCnt++)
         {
            iMask = iMask << (iPos-1);
            iResult = iNo1 & iMask;

            if(iMask == iResult)
            {
               iCount++;
            }
            iPos++;
            iMask = ResetMask;

         }

         cout<<"ON bits in "<<iNo1<<" is : "<<iCount<<"\n";

         iCount = 0;
         iPos = 1;
         iMask = ResetMask;

         for(iCnt = 0; iCnt < 32; iCnt++)
         {
            iMask = iMask << (iPos-1);
            iResult = iNo2 & iMask;

            if(iMask == iResult)
            {
               iCount++;
            }
            iPos++;
            iMask = ResetMask;

         }

         cout<<"ON bits in "<<iNo2<<" is : "<<iCount<<"\n";
         
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
   UINT iRet = 0;

   cout<<"Enter the first Number\n";
   cin>>iValue1;

   cout<<"Enter the Second Number\n";
   cin>>iValue2;

   DesginMask obj(iValue1,iValue2);

   obj.ToggleBit();
   

   return 0;
}

