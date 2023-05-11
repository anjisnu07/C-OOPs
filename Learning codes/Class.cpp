#include<iostream>

using namespace std;

class obj{
	private:
		int c=95;
	public:
		int a=25;
		int b=90;
		
	void hey(){
		cout << c <<"   ";
		cout << a <<"   ";
		cout << b <<"   ";
	}
	
};


int main(){
	obj object;
	object.hey();
	object.a;   //	this can be declared as it's in public
	object.c;  //	This one can't be accessesed as it is priva
	return 0;
}
