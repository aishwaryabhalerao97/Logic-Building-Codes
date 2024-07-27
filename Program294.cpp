#include<iostream>
using namespace std;

int SumFactors(int iNo)
{ 
    static int  i = 1;
    static int fact = 0;
    if(i <= (iNo/2))
 {
    if(iNo % i == 0)
    {
        fact = fact + i;
    }
    i++;
    
    SumFactors(iNo);
 }
 return fact;
}
int main()
{
    int iValue = 0;
  int iRet = 0;

    cout<<"Enter number : "<<endl;
    cin>>iValue;

    iRet = SumFactors(iValue);
    cout<<"sum of Factors are : "<<iRet<<endl;
    
    return 0;
}