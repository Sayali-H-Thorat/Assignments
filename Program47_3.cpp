#include<iostream>
using namespace std;

template <class T>
T AddN(T *Arr,int iSize)
{
    T Sum = 0;

    int i = 0;

    for(i = 0; i<iSize;i++)
    {
        Sum = Sum + Arr[i];
    }

    return Sum;
}

int main()
{
    int arr[]= {10,20,30,40,50};
    int Sum = AddN(arr,5);
    cout<<"Sum of integer is :"<<Sum<<"\n";

    float brr[] = {10.0f,3.7f,9.8f,8.7f};
    float fSum = AddN(brr,4);
    cout<<"Sum of float is :"<<fSum<<"\n";

    return 0;
    
    

}