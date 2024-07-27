#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;
         
        public:
        ArrayX(int No)
        {
            cout<<"Inside constructor "<<endl;
            iSize = No;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside destructor "<<endl;
            delete []Arr;
        }

        void Accept()
        {
             int i = 0;
            cout<<"Enter the elements :"<<endl;
            for(i = 0; i < iSize ; i++)
            {
                cin>>Arr[i];
            }
        }
        void Display()
        {
            int i = 0;
            cout<<"Entered elements are :"<<endl;
            for(i = 0; i < iSize ; i++)
            {
                cout<<Arr[i]<<endl;
            }
        }
        float Average()
        {
            int iSum = 0;
            int i = 0;
             float iAns = 0.0f;
            for(i = 0; i < iSize ; i++)
            {
            iSum = iSum + Arr[i];
            }
            iAns = ((float)iSum / (float)iSize);
            return iAns;
            
        }
};
int main()
{
   int iLength = 0;
   float iRet = 0.0f;

   cout<<"Enter number of elements that you want to store :"<<endl;
   cin>>iLength;

   ArrayX aobj(iLength);

   aobj.Accept();
   aobj.Display();

   iRet = aobj.Average();
   cout<<"Average is :"<<iRet<<endl;
   

   //aobj.Arr = NULL;  will show error due to access specifier
   //aobj.iSize = 20;

    return 0;
}