//Q>Use a parent class student which has data member "Roll-num".class test and class sports inherit student class.test class stores the 
//test marks and sports class stores the score in sports.another total class is there which inherit this two class.and finally show
//output of roll no,individual marks,total marks.
#include<iostream>
using namespace std;

class student{
	protected:
		int roll;
	public:
		void set_roll(){
			cout << "Enter roll no:";
			cin >> roll;
		}
		void get_roll(){
			cout <<"\nYour roll no is:"<< roll <<endl;
		}
};

class test:public student{
	protected:
		int test_marks;
	public:
	   void set_test(){
	   	cout <<"\nEnter test marks:";
	   	cin >> test_marks;
	   }
	   void get_test(){
	   		cout <<"Test marks:"<<test_marks<<endl;
	   }
};

class sports:public student{
	protected:
		int sports_marks;
	public:
	   void set_sports(){
	   	cout <<"\nEnter sports marks:";
	   	cin >>sports_marks;
	   }
	   void get_sports(){
	   		cout <<"Test marks:"<<sports_marks<<endl;
	   }
};

class result:public test,public sports{
	public:
		result(){
			test::set_roll();
		}
		void show(){
			test::get_roll();
			get_test();
			get_sports();
		cout<<"Total score obtained is:"<<sports_marks+test_marks<<endl;
		}
};

int main(){
	result a;
	a.set_test();
	a.set_sports();
	a.show();
}
