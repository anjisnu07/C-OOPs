#include<iostream>
using namespace std;

class a{
	
	public:
		int data1;
		void disp1(){
			cout <<"The data 1 is:"<<data1<<endl;
		}
};

class b:public a{
	
	public:
		int data2;
		void disp2(){
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
	base_pointer->data1=99;
	base_pointer->disp1();
	
	derived_pointer=&obj2;
	derived_pointer->data2=100;
	derived_pointer->disp2();
	
	
}
