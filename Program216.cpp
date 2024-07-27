#include<iostream>
using namespace std;

int main()
{
    int iLength = 0, i = 0;
    int *ptr =  NULL;
    cout<<"Enter number of element that you want to store : "<<endl;
    cin>>iLength;

    ptr = new int[iLength];
    delete []ptr;
    return 0;
}