#include<iostream>
using namespace std;

class air{
	public:
	air(){
		cout << "constructor is called..\n";
	}
	~air(){
		cout << "destructor is called" <<endl;
	}
};
int main(){
	air a;
	{
		air b,c;
		cout << "Block ends\n";
	}
	air d;
}
