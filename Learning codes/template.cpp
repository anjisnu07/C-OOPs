#include<iostream>
using namespace std;

template <class x,class y>

x big(x a,y b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

int main(){
	cout << big(3.12,2.11)<<endl;
	cout << big(4,5)<<endl;
}
