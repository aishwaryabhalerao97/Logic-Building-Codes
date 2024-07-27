#include<iostream>
using namespace std;
//Aproach 3 using for loop
void Display()
{
    auto int i = 1;
   
    if( i <= 4)
 {
    cout<<"*"<<endl;
     i++;
     Display();
 }
}
int main()
{
    Display();
    return 0;
}