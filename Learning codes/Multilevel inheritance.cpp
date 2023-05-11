#include<iostream>
using namespace std;

class roll{
	protected:
		int roll;
	public:
		void set_roll(int k){
			roll=k;
		}
		void get_roll(){
			cout <<"Your roll no is:"<<roll<<endl;
		}
};

class marks:public roll{
	protected:
		int maths,physics;
	public:
		void set_marks(int a,int b){
			maths=a;
			physics=b;
		}
		void get_marks(){
			cout <<"Your marks in math:"<<maths<<endl;
			cout <<"Your marks in physics:"<<physics<<endl;
			
		}
};

class result:public marks{
	protected:
		int percentage;
	public:
		void display(){
			get_roll();
			get_marks();
			cout<<"Your percentage is:"<<maths/2+physics/2<<"%"<<endl;
		}
};

int main(){
	result a;
	a.set_roll(3101);
	a.set_marks(100,90);
	a.display();
}
