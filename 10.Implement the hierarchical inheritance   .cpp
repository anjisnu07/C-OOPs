//Implement the hierarchical inheritance                             
//                                   Account
//									/	 |	\						
//                   Savings account     |   Current account
//                                  Fixed deposit
//									/    |		\
//                          Short term   |      Long term
//								   medium term
#include<iostream>
using namespace std;

class account{
	protected:
		int accountno,ifsc,amount;
		string name;
	public:
		void set_info(){
			cout<<"Enter your name:";
			cin >> name;
			
			cout <<"\nEnter IFSC code:";
			cin>>ifsc;
			
			cout <<"\nEnter account number:";
			cin >>accountno;
			
			cout <<"Enter approx amount to know about interest:";
			cin >>amount;
		}
		void get_info(){
			cout <<"user name:"<<name<<endl;
			cout <<"IFSC code:"<<ifsc<<endl;
			cout <<"Account no:"<<accountno<<endl;
			cout <<"Approx amount:"<<amount<<endl;
		}
};

class savings:public account{
	protected:
		int k=0;
	public:
		void savings_interest(){
			set_info();
			k=amount+amount*20/100;
		}
		void savings_show(){
			get_info();
			cout <<"Savings interest rate is 20%"<<endl;
			cout <<"Your total balance will be:"<<k<<endl;
		}
};

class current:public account{
	protected:
		int k=0;
	public:
		void current_interest(){
			set_info();
			k=amount+amount*10/100;
		}
		void current_show(){
			get_info();
			cout <<"Current interest rate is 10%"<<endl;
			cout <<"Your total balance will be:"<<k<<endl;
		}
};

class fd:public account{
	
};

class sterm:public fd{
	protected:
		int k=0;
	public:
		void sterm_interest(){
			set_info();
			k=amount+amount*15/100;
		}
		void sterm_show(){
			get_info();
			cout <<"Short-term fd interest rate is 15%"<<endl;
			cout <<"Your total balance will be:"<<k<<endl;
		}
};

class lterm:public fd{
	protected:
		int k=0;
	public:
		void lterm_interest(){
			set_info();
			k=amount+amount*25/100;
		}
		void lterm_show(){
			get_info();
			cout <<"long-term fd interest rate is 25%"<<endl;
			cout <<"Your total balance will be:"<<k<<endl;
		}
};

class mterm:public fd{
	protected:
		int k=0;
	public:
		void mterm_interest(){
			set_info();
			k=amount+amount*20/100;
		}
		void mterm_show(){
			
			get_info();
			cout <<"Medium-term fd interest rate is 20%"<<endl;
			cout <<"Your total balance will be:"<<k<<endl;
		}
};

int main(){
	cout <<"\n==========================================Savings========================================================\n";
	savings s;
	s.savings_interest();
	s.savings_show();
	
	cout <<"\n==========================================Current========================================================\n";
	current a;
	a.current_interest();
	a.current_show();
	
	cout <<"\n==========================================Short term fd========================================================\n";
	sterm b;
	b.sterm_interest();
	b.sterm_show();
	
	cout <<"\n==========================================long term fd========================================================\n";	
	lterm c;
	c.lterm_interest();
	c.lterm_show();
		cout <<"\n==========================================mid term fd========================================================\n";
	mterm d;
	d.mterm_interest();
	d.mterm_show();
}

