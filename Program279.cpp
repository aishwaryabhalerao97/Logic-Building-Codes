#include<iostream>
using namespace std;
//Aproach 4 using static recurrsion
void Display(int iNo)
{
    int i = 0;
    while(i >= 1)
 {
    cout<<i<<endl;
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