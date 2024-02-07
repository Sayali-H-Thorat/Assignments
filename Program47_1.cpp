#include<iostream>
using namespace std;

template <class T>
T Multiply(T no1, T no2)
{
    T Ans;

    Ans = no1 * no2;

    return Ans;

}

int main()
{

    int iRet = Multiply(10,20);
    cout<<"Multiplication of integer is:"<<iRet<<"\n";

    float fRet = Multiply(10.0f, 20.5f);
    cout<<"Multiplication of float is:"<<iRet<<"\n";

    return 0;
}