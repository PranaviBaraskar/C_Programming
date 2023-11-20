////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Write a program which checks whether 15th bit is ON or OFF.
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

      bool CheckBit()
      {
         iMask = 0X4000;
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
   UINT iValue = 0;
   bool bRet = false;

   cout<<"Enter the Number\n";
   cin>>iValue;

   DesginMask obj(iValue);
   bRet = obj.CheckBit();

   if(bRet == true)
   {
      cout<<"15th bits ON\n";
   }
   else
   {
      cout<<"15th bits OFF\n";
   }

   return 0;
}


// input :     28397
