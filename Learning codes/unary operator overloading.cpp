#include<iostream>
using namespace std;

class air{
	int a;
	public:
		air(){
			a=19;
		}
		void operator ++(){
			a=a+4;
		}
		void disp(){
			cout << "New a is:" << a;
		}
};
int main(){
	air a;
	++a;
a.disp();
}
