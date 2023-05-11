#include<iostream>
using namespace std;
int main(){
	int *a=new int;
	cin >> *a;
	
	cout << *a;
	
int n;
cin  >> n;
	

	int *arr=new int[n];
	
	for(int i=0;i<n;i++){
		
		cin >> arr[i];
	}
	for(int i=0;i<n;i++){
		
		cout << arr[i];
	}
}
