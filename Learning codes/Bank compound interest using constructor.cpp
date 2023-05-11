//Find compound interest

#include<iostream>
using namespace std;

class air{
	float principal,rate,time,final;
	public:
		air();
		air(float p,float r,float t){
			principal=p;
			rate=r;
			time=t;
		
		for(int i=0;i<t;i++){
			
			p=p+p*r/100;
		}
		final=p;
		}
		void print(){
			cout <<"The total amount after " << time <<" Years is:"<<final;
		}
};

int main(){
	float p,r,t;
	cout << "Enter amount you want to keep in bank:\n";
	cin >> p;
	cout <<"Enter how many years you want to keep:";
	cin >> t;
	cout << "Our current interest rate is:4%";
	r=4;
	air a(p,r,t);
	a.print();
}
