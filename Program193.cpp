//Aproach 1
#include<iostream>
using namespace std;

int main()
{
    int iValue1 = 0,iValue2 = 0;
    int iAns = 0;
    cout<<"Enter fisrt number : \n"<<endl;
    cin>>iValue1;

    cout<<"Enter second number : \n"<<endl;
    cin>>iValue2;

    iAns = iValue1 + iValue2;

    cout<<"Addition is: "<<iAns<<endl;

    return 0;
}
//g++ Program192.cpp -o myexe