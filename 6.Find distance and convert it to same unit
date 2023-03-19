//Create Two class df and dm,df will hold distance in feet and inches and dm will hold distance in m and cm,and
//At last every distnace in cm.

#include<iostream>
using namespace std;

class dm;
class df{
		float feet;
		float inch;
		
		public:
		void getdata(){
	
			cout << "Enter the distance in feet:" ;
			cin >>feet;
			
			cout << "Enter the distance in inch:";
			cin >>inch;
				}
			friend void dist(df,dm);
	
	
	

		
		
};

class dm{
		float m,cm;
		
		public:
			void getdata(){
			
			cout << "Enter the distance in meter:" ;
			cin >>m;
			
			cout << "Enter the distance in Centimeter:";
			cin >>cm;
			}
		friend void dist(df,dm);
};
void dist(df a,dm b){
	a.feet=a.feet*12*2.54;
	a.inch=a.inch*2.54;
	b.m=b.m*100;
	b.cm=a.feet+a.inch+b.m+b.cm;
	
	cout << "The distance is: "<<b.cm <<"cm \n";
	
}

int main(){
	df a;
	dm b;
	a.getdata();
	b.getdata();
	dist(a,b);
	
}
