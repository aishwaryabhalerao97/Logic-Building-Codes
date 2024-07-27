#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int *Arr;
    int iSize;

    ArrayX(int Value)
    {   this->iSize = Value;
        this->Arr = new int[iSize];
    }
    ~ArrayX()
    {
        delete []Arr;
    }
void Accept()
{
    cout<<"Eneter the elements: \n";
    for(int i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }

}
void Display()
{   cout<<"Entered the elements: \n";
     for(int i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}
};
int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

    cout<<"Enter the number of elements : \n";
    cin>>iLength;

    ArrayX *aobj = new ArrayX(iLength);
   aobj-> Accept();
   aobj->Display();
    ptr = new int[iLength];

   delete aobj;
    return 0;
}