   **// Q.no1==> Write a program to show student information using class object.**

#include<iostream>

using namespace std;

class obj{
	public:
		int id;
		int marks;
		string name;
		
		void getname(){
			cout << "Enter the name of the student: ";
			cin >> name;
		}
		
		void getid(){
			cout << "Enter the id of the student: ";
			cin >> id;
		}
		
		void getmarks(){
			cout << "Enter the marks of the student: ";
			cin >> marks;
		}
};


int main(){
	obj object;
	int no;
	int num;
	int sum=0;
	cout << "Enter the no of student:";
	cin >> no;
	
	for(int i=0;i<no;i++){
			cout << "Details of " << i+1 << "th student.\n";
		object.getname();
		object.getmarks();
	num=	object.getid();
		sum=sum+num;
		
	}
}













