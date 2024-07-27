#include<iostream>
using namespace std;


int main()
{
    int iLength = 0;
    int *ptr = NULL;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    ptr = new int[iLength];

    cout<<"Enter the elemnets : \n";
    for(int i = 0; i < iLength; i++)
    {
        cin<<ptr[i]<<"\n";
    }

    cout<<"Enter the elemnets are : \n";
    for(i = 0; i < iLength; i++)
    {
        cout<<ptr[i]<<"\n";
    }
    delete []ptr;
    return 0;
}