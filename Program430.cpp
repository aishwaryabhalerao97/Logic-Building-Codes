#include<iostream>
using namespace std;

template <class T>
void Swap(T &A, T &B)
{
    T Temp;
    Temp =A;
    A = B;
    B = Temp;
}
int main()
{
    char Value1 = 'A', Value2 = 'S';
    cout<<"Value of Value1 Variable is : "<<Value1<<endl;
     cout<<"Value of Value2 Variable is : "<<Value2<<"\n";
    Swap(Value1, Value2);
   
   cout<<"Value of  Value1 Variable  after swapping is :" <<Value1<<"\n";
     cout<<"Value of Value2 Variable after swapping is : "<<Value2<<"\n";
   
    return 0;
}