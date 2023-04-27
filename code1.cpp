//Q>make 1 class for roll,2nd class to get numbers in two subject.make a 3rd class to print roll along with the total marks.

#include<iostream>
using namespace std;

class a{
	protected:
		int roll;
	public:
		void set_roll(int a){
			roll=a;
		}
		void get_roll(){
			cout <<"Your roll is:"<<roll<<endl;
		}
};

class b:public a{
	protected:
		int sub1,sub2;
	public:
		void set_marks(int a,int b){
			sub1=a;
			sub2=b;	
		}
		void get_marks(){
			cout <<"Your marks in sub1:"<<sub1<<endl;
			cout <<"Your marks in sub2:"<<sub2<<endl;
			
		}
	
};

class total:public b{
	public:
		void show(){
			get_roll();
			get_marks();
			cout <<"Total marks="<<sub1+sub2<<endl;
					}
};

int main(){
	total c;
	c.set_roll(3101);
	c.set_marks(90,99);
	c.show();
}
