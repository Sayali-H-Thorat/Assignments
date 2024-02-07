#include<iostream>
using namespace std;


template<class T>
T Minimum(T *Arr,int iSize)
{
	int iCnt = 0;
	T Min = Arr[0];
	
	for(iCnt = 0; iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt] < Min)
		{
			Min = Arr[iCnt];
		}
	}
	return Min;
}

int main()
{

	int Data[] = {10,20,30,40,50};
	int iRet = Minimum(Data,5);
	cout<<"Minimum of int:"<<iRet<<"\n";
	
	float Dataf[] = {10.0,3.7,9.8,8.7};
	float fRet = Minimum(Dataf,4);
    cout<<"Minimum of float:"<<fRet<<"\n";	
	
	return 0;
}