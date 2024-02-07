#include<iostream>
using namespace std;

template <class T>
void Reverse(T *arr,int Size)
{
    int iStart = 0;
		int iEnd = Size-1;
		int iTemp = 0;
		
		while(iStart < iEnd)
		{
			iTemp = arr[iStart];
			arr[iStart] = arr[iEnd];
			arr[iEnd] = iTemp;
			
			iStart++;
			iEnd--;
		}
}

int main()
{

    int arr[] = {10,20,30,10,30,40,10,40,10};
    cout<<"Original array is :\n";
    for(int i = 0; i<9; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";

    Reverse(arr,9);

    cout<<"Array after reverse the elements is:\n";
    for(int i = 0; i<9;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}