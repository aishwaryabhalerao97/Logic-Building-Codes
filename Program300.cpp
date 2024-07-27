#include<iostream>
using namespace std;
int CountEven(int Arr[], int iSize)
{
    int i = 0, iCount = 0;
    i = 0;
    while( i <= iSize)
    {
        if(Arr[i] % 2==0)
        {
            iCount++;
             i++;
        }
        
    }
    return iCount;
}

int main()
{
   int *Arr = NULL;
    int iCount = 0, i = 0;
    int iRet = 0;
  
    cout<<"Enter Number  of elements : "<<endl;
    cin>>iCount;

    Arr = new int[iCount];

cout<<"Enter the elements :"<<endl;
    for(i = 0; i< iCount; i++)
    {
        cin>>Arr[i];
    }
iRet = CountEven(Arr,iCount);
cout<<"Entered elements are : "<<iRet<<endl;
 
    delete []Arr;
    return 0;
}