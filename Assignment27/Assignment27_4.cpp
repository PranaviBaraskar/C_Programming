////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Write a program which accept one number from user and toggle 7th and 10th bit of that
//                          number. Resturn modified number.
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
      UINT iResult;

   public :

      DesginMask(UINT X)
      {
         iNo = X;
      }

      UINT ToggleBit()
      {
         iMask1 = 0X40;
         iMask2 = 0X200;

         iMask = iMask1 | iMask2;

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
   UINT iValue = 0;
   UINT iRet = 0;

   cout<<"Enter the Number\n";
   cin>>iValue;

   DesginMask obj(iValue);
   iRet = obj.ToggleBit();

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
