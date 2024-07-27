#include<iostream>
#include<String.h>

using namespace std;

int main()
{
    char Arr[30] = "Hello World";
    int iRet = 0;

  iRet = strlen(Arr);

    cout<<"string length is :"<<iRet<<endl;
    
    return 0;
}