#include<iostream>
using namespace std;

int main(){
	 
	 int i=2;
	 try{
	 	
	 	if(i==1){
	 		throw 1;
		 }
		 else if(i==2){
		 	throw 2;
		 }
		 else{
		 	throw 3;
		 }
	 }
	 catch(int k){
	 	cout <<"Error with code:"<<k;
	 }
}
