#include<iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    int iValue1 = 10, iValue2 = 11;

    int iRet = 0;

float fValue1 = 10.5f, fValue2 = 11.0f;

    float fRet = 0.0f;

double dValue1 = 10.5, dValue2 = 11.0;

    double dRet = 0.0;

    iRet = Addition(iValue1,iValue2);

    cout<<"Addition of int is :"<<iRet<<"\n";

    iRet = Addition(fValue1,fValue2);

    cout<<"Addition is float :"<<fRet<<"\n";

    iRet = Addition(dValue1,dValue2);

    cout<<"Addition is double :"<<dRet<<"\n";
    return 0;
}