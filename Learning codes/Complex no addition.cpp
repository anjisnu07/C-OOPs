//5.Sum of two complex no using friend function.
#include<iostream>
using namespace std;
class air{
	int a,b;
	
	public:
		void setno(){
		cout << "Enter real part: \n";
		cin >> a;
		cout << "Enter imaginary part: \n";
		cin >> b;
			}

		void printno(){
	
		cout <<"Your entered no is: " << a <<" + " << b <<"i \n";
			
			}
			
	friend void sum(air m,air n);
	
};

	void sum(air m,air n){	
					
					int c,d;
					c=m.a+n.a;
					d=m.b+n.b;
					
					cout << "It's sum is: " << c <<" + " << d<<"i \n";
					
		}

int main(){
	air c1,c2;
	int a,b;
	
	c1.setno();
	c1.printno();
	
	c2.setno();
	c2.printno();
	
	sum(c1,c2);
	
}
