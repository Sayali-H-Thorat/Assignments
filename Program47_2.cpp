#include<iostream>
using namespace std;

template <class T>
T Max(T no1, T no2, T no3)
{
    if(no1 > no2 && no1 > no3)
    {
        cout<<"Largest number is :"<<no1<<"\n";
    }
    else if(no2 >no1 && no2 >no3)
    {
        cout<<"Largest number is :"<<no2<<"\n";
    }
    else
    {
        cout<<"Largest number is:"<<no3<<"\n";
    }
   

}

int main()
{

    int iRet = Max(10,100,20);

    float fRet = Max(500.0f, 70.0f, 90.5f);

    return 0;
}