#include<iostream>
using namespace std;
//Aproach 4 using static recurrsion
void Display(int iNo)
{
    static int i = 1;
   
    if( i <= iNo)
 {
    cout<<"*"<<endl;
     i++;
     Display(iNo);
 }
  cout<<"End of Display"<<endl;
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