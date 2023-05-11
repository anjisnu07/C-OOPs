#include<iostream>
using namespace std;

class a{
	
	public:
		int data1=10;
		virtual void disp(){
			cout <<"The data 1 is:"<<data1<<endl;
		}
};

class b:public a{
	
	public:
		int data2=100;
		void disp(){
			cout <<"The data 1 is:"<<data1<<endl;
			cout <<"The data 2 is:"<<data2<<endl;
		}
};


int main(){
	a * base_pointer;
	a obj1;
	b *derived_pointer;
	b obj2;
	
	base_pointer=&obj2;
//	base_pointer->data2=99;
	base_pointer->disp();
	

	
	
}
