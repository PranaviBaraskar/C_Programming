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
      UINT iResult, iCount;
      

   public :
      DesginMask(UINT X)
      {
         iNo = X;
         iResult = 0;
         iCount = 0;
      }

      UINT ToggleBit()
      {
         UINT iMask, ResetMask;
         UINT iCnt, iPos;

         iMask = 0X00000001;
         ResetMask = iMask;
         iCnt = 0;
         iPos = 1;

         for(iCnt = 0; iCnt < 32; iCnt++)
         {
            iMask = iMask << (iPos-1);
            iResult = iNo & iMask;

            if(iMask == iResult)
            {
               iCount++;
            }
            iPos++;
            iMask = ResetMask;

         }
         return iCount;
         
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
   UINT iRet = 0;

   cout<<"Enter the Number\n";
   cin>>iValue1;

   DesginMask obj(iValue1);
   iRet = obj.ToggleBit();

   cout<<"number of bits is on: "<<iRet<<"\n";

   return 0;
}

