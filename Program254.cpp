#include<iostream>
#include<String.h>

using namespace std;

int main()
{
    char Arr[30] = "Hello World";
    char Brr[30] = "India";

  strcat(Brr,Arr);

    cout<<"string is :"<<Brr<<endl;
    
    return 0;
}