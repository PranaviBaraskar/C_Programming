////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Write a program which accept one number from user and off 7th and 10th bit of that
//                          number if it is on. Resturn modified number.
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
      UINT iMask1;
      UINT iMask2;

   public :

      DesginMask(UINT X)
      {
         iNo = X;
      }

      UINT OffBit()
      {
         iMask1 = 0X40;
         iMask2 = 0X200;

         iMask = iMask1 | iMask2;

         if(iMask & iNo)
         {
            return (iNo ^ iMask);
         }
         else
         {
            return iNo;
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
   UINT iRet = 0;

   cout<<"Enter the Number\n";
   cin>>iValue;

   DesginMask obj(iValue);
   iRet = obj.OffBit();

   if(iRet == iValue)
   {
      cout<<"Bit is already OFF\n";
   }
   else
   {
      cout<<"Modified number is : "<<iRet<<"\n";
   }

   return 0;
}
