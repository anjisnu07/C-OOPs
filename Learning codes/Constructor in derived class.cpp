#include<iostream>
using namespace std;

class A{
	
	int data1,data2;
	public:
		A(int a,int b){
			data1=a;
			data2=b;
		}
		void print1(){
		
		cout <<"Two values are:"<<data1<<","<<data2<<endl;
		}
};
class B{
	
	int data1,data2;
	public:
		B(int a,int b){
			data1=a;
			data2=b;
		}
		void print2(){
		
		cout <<"Two values are:"<<data1<<","<<data2<<endl;
		}
};

class c:public A,public B{
	int data1;
	public:
		c(int a,int b,int c,int d,int e):A(a,b),B(c,d){
			data1=e;
		}
		void print3(){
		cout <<"values are:"<<data1<<endl;
		}
};
int main(){
	c m(10,15,20,30,40);
	m.print1();
	m.print2();
	m.print3();
}
