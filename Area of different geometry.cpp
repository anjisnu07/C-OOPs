#include<iostream>

using namespace std;

class object{
	
	int l,b;
	float a;
	public:
		void rec(){
			cout << "Enter length of rectangle:";
			cin >>l;
			cout << "Enter breadth of rectangle:";
			cin >> b;
			
			a=l*b;
			
			cout << "Area of rectangle is:" << a ;
			
			
		}
		
		void tri(){
			cout << "Enter base of triangle:";
			cin >>l;
			cout << "Enter heinght of rectangle:";
			cin >> b;
			
			a=(1*l*b)/2;
			
			cout << "Area of triangle is:" << a ;
			
			
		}
		
		void cir(){
			cout << "Enter radius of circle:";
			cin >>l;
			
			
			a=(3.14*l*l);
			
			cout << "Area of triangle is:" << a ;
			
			
		}
	
	
};

int main(){
	object area;
	int opt;
do{

	cout << "\nChoose option:\n" << endl;
	cout << "1.Area of rectangle\n" << endl;
	cout << "2.Area of traingle\n" << endl;
	cout << "3.Area of circle\n" << endl;
	cin >> opt;

	switch(opt){
		case 1:area.rec();
		break;
		case 2:area.tri();
		break;
		case 3:area.cir();
		break;
		default: cout << "Choose proper option";
		break;
	}
}while(1);
	
}
