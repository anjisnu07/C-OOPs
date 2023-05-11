#include<iostream>
using namespace std;

//Forward declaration
class air;

class sub{
	
	public:
		void subtract(air);
};

class air{
	int a=100;
	int b=90;
	public:
		friend class sub;
		void add(){
			a=a+b;
			cout << "Value is a: "<< a <<endl;
			
		}
		
};



void sub::subtract(air o1){
    o1.a=o1.a-o1.b;
    cout << "Sub res is" << o1.a;
};


int main(){
	air k,q;
	k.add();
	
	sub m;
	m.subtract(k);
}
