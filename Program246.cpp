#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char Arr[30] = "Hello World";
    char Brr[30];

    strcpyX(Brr,Arr);

    cout<<"Destinatiom string :"<<Brr<<endl;
    
    return 0;
}