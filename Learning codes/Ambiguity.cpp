#include<iostream>
using namespace std;

class result{
	protected:
		int marks=99;
	public:
		void get_marks(){
			cout << marks;
		}
		
};
class res{
	protected:
		int percentage=93;
	public:
		void get_marks(){
			cout << percentage;
		}
		
};

class total:public result,public res{
	public:
		void show(){
			result::get_marks();
		}
};
int main(){
	total a;
	a.show();
	
}
