#include<iostream>
using namespace std;
//Aproach 4 using static recurrsion
void Display(int iNo)
{
    while(iNo >= 1)
 {
    cout<<iNo<<endl;
     iNo--;
     
 }
}
int main()
{
    int iValue = 0;

    cout<<"Enter number : "<<endl;
    cin>>iValue;

    cout<<"End of application"<<endl;

    Display(iValue);
    return 0;
}