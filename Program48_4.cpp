#include<iostream>
using namespace std;

template <class T>
int SearchLast(T *arr,int iSize, T iNo)
{
    int iCnt = 0;
    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(arr[iCnt] == iNo)
        {
           break;
        }
    }
    return iCnt;

}
int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchLast(arr,9,40);

    cout<<"Last occurrence of 40 is at :"<<iRet<<"\n";

    return 0;
}
