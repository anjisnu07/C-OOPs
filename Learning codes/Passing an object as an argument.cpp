#include<iostream>
using namespace std;

class air2{
	public: 
		int a;
			void sum(air2 o){
				a=a+o.a;
				cout << a <<endl;
			}
};

int main(){
	air2 o1,o2;
	o1.a=100;
	o2.a=50;
	
	o1.sum(o2);      // New value will be assigned here for a; o1.sum(o2)=> a=a+o2.a==>a=100+50
	o2.sum(o1);
}
