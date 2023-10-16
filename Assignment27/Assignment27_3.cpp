////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Write a program which accept one number from user and toggle 7th bit of that
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
      UINT iResult;

   public :

      DesginMask(UINT X)
      {
         iNo = X;
         iResult = 0;
      }

      UINT ToggleBit()
      {
         iMask = 0X40;

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
