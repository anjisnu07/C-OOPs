#include<iostream>
using namespace std;
class air{
	
	string *name=new string[3];
	static int id;
		public:
			void inp(){
			cout << "Enter name of the student:\n";
			cin >> *name;
			id++;
			}
			void out(){
				cout << id << "." << *name <<endl;
			}
	
	
};

int air :: id;
int main(){
	
	air o1,o2,o3,o4;
	
	o1.inp();
	o1.out();
	
	o2.inp();
	o2.out();
	
	o3.inp();
	o3.out();
	
	o4.inp();
	o4.out();
	
	
}
