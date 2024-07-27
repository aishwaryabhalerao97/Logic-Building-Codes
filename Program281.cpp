#include<iostream>
using namespace std;
//Aproach 4 using static recurrsion
int Addition(int iNo)
{
   int iSum = 0;
   int i = 1;
    while(i <= iNo)
 {
    iSum = iSum + i;
     i++;   
 }
 return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : "<<endl;
    cin>>iValue;

    iRet = Addition(iValue);
     cout<<"Addition is : "<<iRet<<endl;
    cout<<"End of application"<<endl;
    return 0;
}