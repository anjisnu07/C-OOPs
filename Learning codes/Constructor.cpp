#include<iostream>
using namespace std;

class air{
	int a,b;
	public:
//		air()   //	This is a default construct
//		{		
//			a=10;
//			b=23;
//		}
//		

		air(int ,int );
		 print(){
			cout << "Your no is: " << a << "+ i" << b;	
		}
};
air::air(int x,int y){
	a=x+x;
	b=y+y;
}

//air::air(){
//	a=10;
//	b=23;
//}

int main(){
//	Explicit call
//	air a= air(10,20);
//Implicit call
air a(10,20);
	a.print();
}
