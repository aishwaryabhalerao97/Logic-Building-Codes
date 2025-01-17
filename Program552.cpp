#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(T Value);
        ~ArrayX();
        void Accept();
        void Display();
        bool LinearSearch(T Value);
        bool BiDirectionalSearch(T Value);
        bool BinarySearch(T Value);
};

template<class T>
ArrayX<T>::ArrayX(T Value)
{
    this->iSize = Value;
    this->Arr = new T[iSize];
}

template<class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}

template<class T>
void ArrayX<T>::Accept()
{
    int i = 0;

    cout<<"Enter the elements : \n";
    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

template<class T>
void ArrayX<T>::Display()
{
    int i = 0;

    cout<<"Entered elements are : \n";
    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}
template<class T>
bool ArrayX<T>::LinearSearch(T Value)
{   bool flag = false;
    
        for(int i = 0; i < iSize; i++)
        {
           if(Arr[i] == Value)
           {
            flag = true;
            break;
           }
        }
    return flag;
}
template<class T>
bool ArrayX<T>::BiDirectionalSearch(T Value)
{   bool flag = false;
    int iStart = 0;
    int iEnd = 0;

    for(iStart = 0, iEnd = iSize -1; iStart <= iEnd; iStart++,iEnd--)
    {
        if(Arr[iStart] == Value || Arr[iEnd ] == Value)
        {
            flag = true;
            break;
        }
        
    }    
    return flag;
}

template<class T>
bool ArrayX<T>::BinarySearch(T Value)
{   
    int iStart = 0, iEnd =0, iMid = 0;
    bool flag = false;

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd - iStart) / 2);
        
            if(Arr[iMid] == Value)
            {
                flag = true;
            }
            else if(Value > Arr[iMid])
            {
                iStart = iMid + 1;
            }
            else if(Value < Arr[iMid])
            {
                iEnd = iMid -1;
            }
        }
    }

int main()
{
    int iLength = 0, No =0;
    bool bRet = false;
    cout<<"Enter the number of elements : \n";
    cin>>iLength;

    ArrayX<double> *aobj = new ArrayX<double>(iLength);

    aobj->Accept();
    aobj->Display();
    
    cout<<"Enter the element that you want to search : \n";
    cin>>No;

   // bRet = aobj->LinearSearch(No);
    bRet = aobj->BinarySearch(No);
    if(bRet == true)
    {
        cout<<"Elements are present \n";
    }
    else
    {
        cout<<" There is no such Elements : \n";
    }
    delete aobj;
    
    return 0;
}