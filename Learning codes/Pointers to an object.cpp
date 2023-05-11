#include<iostream>
using namespace std;

class a{
	int a;
	public:
		void set(){
			
			cout << "Enter val:\n";
			cin >> a;	
		}
		void get(){
			cout <<"The val is:"<<a<<endl;
		}
};
int main(){
//	a m;
//	m.set(10);

//a *ptr=&m;
//(*ptr).set(50);

//a *ptr=new a;
//ptr->set(200);

a *ptr=new a[3];
a *ptr2= ptr;
 for(int i=0;i<3;i++){	
	 cout<<"For object"<<i+1<<endl;
	 ptr->set();
	 ptr++;
   }
for(int i=0;i<3;i++){
	ptr2->get();
	ptr2++;
}
}
