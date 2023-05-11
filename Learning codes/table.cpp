#include<iostream>

using namespace std;

class air{
	
	int n,i;
	
	public:

void table(){
	cout << "Enter the digit to find it's table:";
	cin >> n;
	
	for(i=1;i<=10;i++){
		
		cout << n << "*" << i << "=" << n*i << endl;
	}
}
	
};

int main(){
	
	air object;
	object.table();
	
}
