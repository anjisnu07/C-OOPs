#include<iostream>
using namespace std;

class add;

class sub{
	int a=99;
	
	
	public:
		friend class add;
		
		friend void swap(sub m,add n);
};

class add{
	
	int b=98;
	
	public:
		void addition(sub k){
				k.a = k.a-k.a;	
			cout << "The result is : " << k.a;
				
		}
	friend void swap(sub m,add n);
};

void swap(sub m,add n){
	int ch;		
		ch=m.a;
		m.a=n.b;
		n.b=ch;
		cout << m.a<< " " << n.b;	
}

int main(){
	sub m;
	add n;
	
	swap(m,n);
	
	
}
