#include<iostream>
using namespace std;
int StrlenX(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        str++;
        iCnt++;
    }
    return iCnt;

}

int main()
{
    char Arr[30];
    int iRet = 0;
  
    cout<<"Enter String : "<<endl;
    cin.getline(Arr,30);

iRet = StrlenX(Arr);
cout<<"String length is :"<<iRet<<endl;
    return 0;
}