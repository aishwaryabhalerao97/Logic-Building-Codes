#include<iostream>
using namespace std;
//Aproach 4 using static recurrsion
void Display(int iNo)
{
     static int i = 1;
   
    if( i <= iNo)
 {
    cout<<i<<endl;
     i++;
     Display(iNo);
 }
}
int main()
{
    int iValue = 0;

    cout<<"Enter number : "<<endl;
    cin>>iValue;

    Display(iValue);
    cout<<"End of application"<<endl;
    return 0;
}