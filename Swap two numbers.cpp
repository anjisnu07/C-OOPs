#include<iostream>

using namespace std;

class swapi{
	
	
public:
  int c;
	
	
		
	void s(int &a,int& b){
	
		c=a;
		a=b;
		b=c;
		
}
		
		
};

int main(){
	swapi object;
	int a=10,b=7;
	object.s(a, b);
	
	cout << a<< " " << b;
}
