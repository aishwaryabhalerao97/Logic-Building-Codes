#include<iostream>
using namespace std;

int Count(int iNo)
{ 
   static int  iCnt = 0;
    if(iNo != 0)
 {
    iCnt++;
     iNo = iNo /10; 
     Count(iNo);  
 }
 return iCnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : "<<endl;
    cin>>iValue;

    iRet = Count(iValue);
    cout<<"Number of digit:"<<iRet;
    return 0;
}