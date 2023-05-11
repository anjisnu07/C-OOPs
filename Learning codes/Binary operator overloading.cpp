#include<iostream>
using namespace std;

class air{
	int a;
	public:
		air(){
			a=0;
		}
		air(int m){
			a=m;
		}
		air operator -(air m){
			air n;
			n.a=a-m.a;
			return n;
		}
		void disp(){
			cout << a;
		}
};
int main(){
	air b(10);
	air c(15);
	
	air res=b - c;
	res.disp();
}
