#include<iostream>
using namespace std;

class employee{
	int id;
	public:
	int salary;
	employee(){
	}
		employee(int a,int b){
			id=a;
			salary=b;
		}
};
 class coder:public employee{
 	
 	public:
 	int bonus;
 	coder(int s){
 	    salary=s;
 		bonus=salary*20/100;
	 }
 }; 
int main(){
	employee air(1,300),bir(2,500);
	
	cout << air.salary<<endl;
	cout << bir.salary<<endl;
	
	coder roy(700);
	cout << roy.salary<<endl;
	cout << roy.bonus; 
}
