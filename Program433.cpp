#include<iostream>
using namespace std;

float Addition(float Arr[], int iSize)
{
    float iSum = 0;
    for(int i = 1; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
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
    iRet = Addition(ptr, iLength);
    cout<<"Addition is : "<<iRet<<"\n";
    delete []ptr;
    return 0;
}