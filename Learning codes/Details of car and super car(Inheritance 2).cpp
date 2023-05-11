#include<iostream>
using namespace std;

class car{
	public:
	int price;
	int weight;
	int tank;
	
	void setprice(){
	    cout <<"Enter price of car:\n";
	    cin >> price;
	}
	void setweight(){
	    cout <<"Enter weight of car:\n";
	    cin >> weight;
	}
	void settank(){
	    cout <<"Enter tank of car:\n";
	    cin >> tank;
	}
	car(){
	   setprice();
	   setweight();
	   settank();
	}
	void getval(){
	   cout <<"==========================>Details of car<====================================\n";
	   cout <<"price:"<<price<<endl;
	   cout <<"weight:"<<weight<<endl;
	   cout <<"tank:"<<tank<<endl;
	   cout <<"===================================================================================\n";
	}
	  
	
};
 class supercar:public car{
 	
 	public:
 	int enginecap;
 	void setengine(){
	    cout <<"Enter enginecap of car:\n";
	    cin >> enginecap;
	}
	
	supercar(){
	   setengine();
	  
	}
		void getval(){
	   cout <<"==========================>Details of Supercar<====================================\n";
	   cout <<"price:"<<price<<endl;
	   cout <<"weight:"<<weight<<endl;
	   cout <<"tank:"<<tank<<endl;
	   cout <<"enginecap:"<<enginecap<<endl;
	   cout <<"===================================================================================\n";
	}
 	
 }; 
int main(){
	car a,b,c,d;
	supercar e,f;
	a.getval();
	b.getval();
	c.getval();
	d.getval();
	e.getval();
	f.getval();
	
}
