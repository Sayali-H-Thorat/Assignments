#include<iostream>
using namespace std;

template <class T>
void Display(T Value, int Size )
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<= Size; iCnt++)
    {
        cout<<Value<<"\t";
    }
    cout<<"\n";

}

int main()
{
    Display('M', 7);

    Display(11,3);

    Display(3.6, 6);

    return 0;
}