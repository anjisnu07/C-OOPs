//Q.no2==>Factorial of a Number, result should be displayed only in the main function.

#include<iostream>

using namespace std;

class object{
	int num;
	int factorial=1;
	public:
		int getfactorial(){
			cout << "Enter no to find factorial:";
			cin >> num;
			for(int i=1;i<=num;i++){
				factorial=factorial*i;
			}
			return factorial;
		}
};

int main(){
	object obj;
	int res;
	
	res=obj.getfactorial();
	cout << "Factorial result is:" << res;
	
}
