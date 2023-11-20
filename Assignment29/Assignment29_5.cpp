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
      UINT iNo;
      UINT iPos1, iPos2;
      UINT iMask, ResetMask, iResult;
      UINT iCnt, iCount;

   public :
      DesginMask(UINT X, UINT A, UINT B)
      {
         iNo = X;
         iPos1 = A;
         iPos2 = B;
         iResult = 0;
         iCount = 0;
      }

      UINT ToggleBit()
      {
         iMask = 0X00000001;
         ResetMask = iMask;
         iCnt = 0;

         for(iCnt = 0; iCnt < 32; iCnt++)
         {
            iMask = iMask << (iPos1-1);
            iResult = iMask ^ iNo;
            if(iNo != iResult)
            {
               iResult = iMask ^ iResult;
            }
            if(iPos1 == iPos2)
            {
               break;
            }
            iPos1++;
            iMask = ResetMask;
         }
         return iResult;
         
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
   UINT iBit1 = 0;
   UINT iBit2 = 0;
   UINT iRet = 0;

   cout<<"Enter the Number\n";
   cin>>iValue1;

   cout<<"Enter the first position \n";
   cin>>iValue1;

   cout<<"Enter the second position\n";
   cin>>iValue1;

   DesginMask obj(iValue1,iBit1,iBit2);
   iRet = obj.ToggleBit();

   cout<<"number of bits is on: "<<iRet<<"\n";

   return 0;
}

