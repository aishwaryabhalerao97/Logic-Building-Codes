#include<iostream>
using namespace std;

int SumDigit(int iNo)
{ 
    int  iSum = 0,iDigit = 0;
    while(iNo != 0)
 {
    iDigit = iNo %10;
    iSum = iSum + iDigit;
     iNo = iNo /10;   
 }
 return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : "<<endl;
    cin>>iValue;

    iRet = SumDigit(iValue);
    cout<<"Number of digit:"<<iRet;
    return 0;
}