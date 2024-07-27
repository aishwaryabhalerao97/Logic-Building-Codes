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
        int SumDigits(int iNo)        //modular aproach
        {
            int iSum = 0, iDigit = 0;

                while(iNo != 0)
                {
                    iDigit = iNo % 10;
                    iSum = iSum + iDigit ;
                    iNo = iNo / 10;
                }
                return iSum;
            }
        void DisplayDigitsCount()
        {
            int i = 0, iRet = 0;

            for(i = 0; i < iSize ; i++)
            {
                iRet = SumDigits(Arr[i]);
                cout<<" Sum of Digits  "<<Arr[i]<<" is :"<<iRet<<endl;
            }
        }
       
};
int main()
{
   int iLength = 0;
   

   cout<<"Enter number of elements that you want to store :"<<endl;
   cin>>iLength;
 
   ArrayX *aobj = new ArrayX(iLength);

   aobj->Accept();
 
   aobj->DisplayDigitsCount();

    delete aobj;
    return 0;
}