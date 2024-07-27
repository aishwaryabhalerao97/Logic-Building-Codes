#include<iostream>
using namespace std;

template <class T>
T Minimum(T Arr[], int iSize)
{
    T Min = Arr[0];
    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }
    return Min;
}

int main()
{
    int iLength = 0;
    float *ptr = NULL;
    int i = 0;
 float iRet = 0.0f;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    ptr = new float[iLength];

    cout<<"Enter the elemnets : \n";
    for(int i = 0; i < iLength; i++)
    {
        cin>>ptr[i];
    }

    cout<<"Enter the elemnets are : \n";
    for(i = 0; i < iLength; i++)
    {
        cout<<ptr[i]<<"\n";
    }
    iRet = Minimum(ptr, iLength);
    cout<<"Addition is : "<<iRet<<"\n";
    delete []ptr;
    return 0;
}