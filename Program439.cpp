#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
    T *Arr;
    int iSize;

    ArrayX(int no)
    {
        iSize = no;
        Arr = new T [iSize];
    }
    ~ArrayX()
    {
        delete[]Arr;
    }

    void Accept()
    {
        int i = 0;

        cout<<"Enter the elements : \n";

        for(i = 0; i< iSize; i++)
        {
            cin>>Arr[i];
        }
    }
    void Display()
    {
        int i = 0;
        cout<<"Elements of array are: \n";

        for(i = 0; i < iSize; i++)
        {
            cout<<Arr[i]<<"\n";
        }
    }
    T Addition()
    {
        int i = 0;
        T sum = 0;
        for(i = 0; i < iSize; i++)
        {
            sum = sum + Arr[i];
        }
        return sum;
    }
};
int main()
{
    int iRet = 0;
 ArrayX aobj(5);

 aobj.Accept();
 aobj.Display();

 iRet = aobj.Addition();
cout<<"Addition is : "<<iRet;

    return 0;
}