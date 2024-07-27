#include<iostream>
using namespace std;
//Aproach 4 using static recurrsion
void Display()
{
    static int i = 1;
   
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