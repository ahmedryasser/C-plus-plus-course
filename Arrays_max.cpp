#include <iostream>
using namespace std;
int arr[5] = {};
int i;
int main()
{
	for(int i=0;i<5;i++)
	{
	cout<<"Enter the number";
	cin>>arr[i];
	}
	cout<<endl;
	for(int i=0;i<5;i++)
	{
		if(arr[0]<arr[i])
		{	
			arr[0]=arr[i];
		}	
	}
	cout<< "The greatest number is "<< arr[0];
}
