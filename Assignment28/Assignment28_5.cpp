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
      UINT iMask;
      UINT iResult;

   public :
      DesginMask(UINT X)
      {
         iNo = X;
         iResult = 0;
      }

      UINT ToggleBit()
      {a
         iMask = 0XF000000F;

         iResult = iNo ^ iMask;

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
   UINT iRet = 0;

   cout<<"Enter the Number\n";
   cin>>iValue1;

   DesginMask obj(iValue1);
   iRet = obj.ToggleBit();

   cout<<"Result is : "<<iRet<<"\n";

   return 0;
}

