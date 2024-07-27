#include<iostream>
using namespace std;
//Aproach 4 using static recurrsion
int Addition(int iNo)
{
   static int iSum = 0;
  static int i = 1;
    if(i <= iNo)
 {
    iSum = iSum + i;
     i++;  
     Addition(iNo); 
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