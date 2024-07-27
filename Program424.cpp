#include<iostream>
using namespace std;

float Addition(float No1, float No2)
{
    float Ans;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    float Value1 = 10.5f, Value2 = 11.0f;

    float iRet = 0.0f;

    iRet = Addition(Value1,Value2);

    cout<<"Addition is :"<<iRet;
    return 0;
}