#include <iostream>
using namespace std;
int arr[] = {12, 10, 20, 30, 40};
int i;
int result=0;
int main()
{
	for(int i=0;i<5;i++){
		result=arr[i]+result;
		
	}

	cout<<result;
	
}
