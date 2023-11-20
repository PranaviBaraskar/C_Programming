////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Write a progarm which accept one number and position from user
//                          and off that bit. Return modified number.
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

      UINT OffBit()
      {
         iMask = 0X00000001;

         iMask = iMask << (iPos-1);
         iMask = ~iMask;

         iResult = iNo & iMask;

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
   UINT iValue2 = 0;
   UINT iRet = 0;

   cout<<"Enter the Number\n";
   cin>>iValue1;

   cout<<"Enter the position of bit\n";
   cin>>iValue2;

   DesginMask obj(iValue1, iValue2);
   iRet = obj.OffBit();

   cout<<"Result is : "<<iRet<<"\n";

   return 0;
}

