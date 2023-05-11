#include<iostream>
using namespace std;
class air{
	int a,b;
	public:
		air(){
			cout <<"\nDefault constructor is called\n";
			a=0;
			b=0;
		}
		
		air(int x,int y){
			cout <<"\nParameterized constructor is called\n";
			a=x;
			b=y;
		}
		air(air &obj){
			cout <<"\nCopy constructor is called\n";
			a=obj.a;
			b=obj.b;
		}
		void printno(){
			cout<< "Value of a:"<<a<<"Value of b:"<<b<<endl;
		}
};

int main(){
	air a(20,30);
	a.printno();
	air b;
	b.printno();
	air c(a);
	c.printno();
	
}
