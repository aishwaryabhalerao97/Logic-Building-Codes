#include<iostream>
using namespace std;

//template <class T>
float Maximum(float Arr[], int iSize)
{
    float Max = Arr[0];
    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
  
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
    iRet = Maximum(ptr, iLength);
    cout<<"Addition is : "<<iRet<<"\n";
    delete []ptr;
    return 0;
}