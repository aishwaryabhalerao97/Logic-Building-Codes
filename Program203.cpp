#include<iostream>
using namespace std;

int SumFactors(int iNo)
{
 int iCnt = 0;
 int iSum = 0;
  
  for("iCnt = 0; iCnt < iNo/2; iCnt++")
  {
    if(iNo % iCnt == 0)
    {
        iSum = iSum + iCnt;
    }
    
    return iSum;
  }
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number :"<<endl;
    cin>>iValue;

    iRet = SumFactors(iValue);

    cout<<"Sumation of factors is :"<<iRet<<endl;

    return 0;
}