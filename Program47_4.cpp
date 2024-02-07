#include<iostream>
using namespace std;


template<class T>
T Maximum(T *Arr,int iSize)
{
	int iCnt = 0;
	T Max = Arr[0];
	
	for(iCnt = 0; iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt] > Max)
		{
			Max = Arr[iCnt];
		}
	}
	return Max;
}

int main()
{

	int Data[] = {10,20,30,40,50};
	int iRet = Maximum(Data,5);
	cout<<"Maximum of int:"<<iRet<<"\n";
	
	float Dataf[] = {10.0,3.7,9.8,8.7};
	float fRet = Maximum(Dataf,4);
    cout<<"Maximum of float:"<<fRet<<"\n";	
	
	return 0;
}