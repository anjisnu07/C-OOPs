//Calculate area of triangle and rectangle in 2 different classes which have inherited from base class shape that has 2 functions called
//get_data() and display_area().Now override display_area() in 2 sub class and claculate area

#include<iostream>
using namespace std;

class shape{
	public:
		int a,b;
		void get_data(){
			cout <<"Enter a and b to find area:";
			cin >>a>>b;
		}
		virtual void display_area()=0;
};
class rectangle:public shape{
	public:
		void display_area(){
			cout << "Area of rectangle is: "<<(a*b)<<endl;
		}
};
class triangle:public shape{
	public:
		void display_area(){
			cout << "Area of triangle is: "<<(a*b/2)<<endl;
		}
};
int main(){

	rectangle k;
	k.get_data();
	k.display_area();
	
	triangle b;
	b.get_data();
	b.display_area();
}
