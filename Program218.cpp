#include<iostream>
using namespace std;
float Average(int Arr[],int iSize)
{
    int i = 0, iSum = 0;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum +Arr[i];
        }
    return ((float)iSum/(float)iSize);
}
int main()
{
    int iLength = 0, i = 0;
    int *ptr =  NULL;
    float iRet = 0.0f;
    
    cout<<"Enter number of element that you want to store : "<<endl;
    cin>>iLength;

     ptr = new int[iLength];

    cout<<"Enter the elements : "<<endl;
    for(i = 0; i < iLength; i++)
    {
        cin>>ptr[i];
    }

    iRet = Average(ptr,iLength);
    cout<<"Average is "<<iRet<<endl;
    delete []ptr;
    return 0;
}