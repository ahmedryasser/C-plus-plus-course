#include <iostream>
using namespace std;
int arr[5] = {};
int i;
int result=0;
int main()
{
	for(int i=0;i<5;i++){
	cout<<"Enter the number";
	cin>>arr[i];
	}
	
	for(int i=0;i<5;i++){
		result=arr[i]+result;
		
	}

	cout<<result;
	
}
