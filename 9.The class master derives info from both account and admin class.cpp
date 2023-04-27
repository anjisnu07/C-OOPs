//Q>The class master derives info from both account and admin class,which in turn derives info from the class person.Define all the 
//classes and write program to create update and display info contained in master object.
#include<iostream>
using namespace std;

class person{
	protected:
		string name;
		int code;
	public:
		void set_val(){
			cout <<"Enter your name:";
			cin >> name;
			cout <<"\nEnter your code:";
			cin >> code;
			
		}
		
		void get_val(){
			cout <<"User name:"<<name<<endl;
			cout <<"User code:"<<code<<endl;
		}
};

class account:public person{
	protected:
		int pay;
	public:
		void set_pay(int k){
			pay=k;
		}
		void get_pay(){
			cout <<"Youe salary is:"<<pay<<endl;
		}
};
class admin:public person{
	protected:
		int exp;
	public:
		void set_exp(){
			cout << "Enter your exp(b/w 1-5):";
			cin >>exp;
		}
		void get_exp(){
			cout <<"Youe salary is:"<<exp<<"/5 \n";
		}
};

class master:public account,public admin{
	public:
		master(){
			account::set_val();
		}
		void show(){
			 account::get_val();
			 get_pay();
			 get_exp();
		}
};

int main(){
	master c;
	c.set_pay(50000);
	c.set_exp();
	c.show();
}
