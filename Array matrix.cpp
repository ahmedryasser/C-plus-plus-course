#include <iostream>
using namespace std;
int arr1[100][100];
int arr2[100][100];
int i,rmat1,rmat2,cmat1,cmat2;
int result=0;
int main()
{
	cout<<"Enter the number of rows in matrix 1 : ";
	cin>>rmat1;
	cout<<"Enter the number of columns in matrix 1 : ";
	cin>>cmat1;
	cout<<"Enter the number of rows in matrix 2 : ";
	cin>>rmat2;
	cout<<"Enter the number of columns in matrix 2 : ";
	cin>>cmat2;
	
	cout<<"Enter the values of the first matrix : ";
	for(int i=0;i<rmat1;i++){
		for(int j=0;j<cmat1;j++){
			cin>>arr1[i][j];
			}
	}
	cout<<"Enter the values of the second matrix : ";
	for(int i=0;i<rmat2;i++){
		for(int j=0;j<cmat2;j++){
			cin>>arr2[i][j];
			}
	}
}
