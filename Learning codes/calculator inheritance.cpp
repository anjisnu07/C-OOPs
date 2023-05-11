#include<iostream>
#include<math.h>
using namespace std;

class simple{
	protected:
		int a,b;
	public:
		void set_data(){
			cout <<"Enter 1st no:";
			cin >> a;
			
			cout<<"Enter 2nd no:";
			cin >> b;
		}
		void display(){
			cout <<"Addition result:"<< a+b <<endl;
			cout <<"Subtraction result:"<< a-b <<endl;
			cout <<"Multiplication result:"<< a*b <<endl;
			cout <<"division result:"<< a/b <<endl;
		}
};

class sci:public simple{
	public:
			void display1(){
			display();
			cout <<"Bitwise XOR result:"<< (a^b) << endl;		
			cout <<"Power result:"<< pow(a,b) <<endl;
		
		}
		
};

int main(){
	sci k;
	k.set_data();
	k.display1();
}
