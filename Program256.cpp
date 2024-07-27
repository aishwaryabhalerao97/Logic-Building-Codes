#include<iostream>
using namespace std;

bool strcmpX(char *first, char *second)
{
    while(*first != '\0')
    { 
           if(*first == *second)
           {
             return true;
                 first++; 
                  second++; 
           }
           else
           {
             return false;
           }
    }
    *second = '\0';
}
int main()
{
    char Arr[30];
    char Brr[30] = "Hello ";
    bool bRet = false; 
    cout<<"Enter the First string : "<<endl;
    cin.getline(Arr,30);

    cout<<"Enter the second string : "<<endl;
    cin.getline(Brr,30);

    bRet = strcmpX(Arr,Brr); 

    if(bRet == true)
    {
        cout<<"String are identical"<<endl;
    }
    else
    {
        cout<<"Strings are differnt"<<endl;
    }
    cout<<"Destination string is :"<<Brr<<endl;
    return 0;
}