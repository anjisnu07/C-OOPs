// Q.no1==> Write a program to show student information using class object.

#include<iostream>
using namespace std;
class student {
    int roll;
    float marks;
    public:
    	 
    void input(){
    
	cout<<"\n Enter Roll no";	
    cin >> roll;
    cout<<" your Roll no:" << roll;
    
    cout <<"\nEnter your Marks>";
    cin >> marks;
    cout <<" Marks>"<<marks;;
    

}

	int  display(){
		
    cout << "\nRoll no."<< roll << "\nMarks" <<marks;
    return 0;
}


};


int main(){
	int i,n;
    student s[10];
    
    cout << "Enter No of student you have:" <<endl;
    cin >> n;
    for (i=1;i<=n;i++) {
	
           s[i].input();
           
	}
	cout << "\n	Your entered data is:-" << endl;
	for (i=1;i<=n;i++) {
	
           
           s[i].display(); 
	}
    
return 0;
}

