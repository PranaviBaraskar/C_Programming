////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  write a program which check whether first and last bit is ON or OFF 
//                          First bit means number 1 and last bit means bit number 32
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
         iMask = 0X80000001;
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
      cout<<"First and last bits ON\n";
   }
   else
   {
      cout<<"First and last bits OFF\n";
   }

   return 0;
}


// input :     3144903403
