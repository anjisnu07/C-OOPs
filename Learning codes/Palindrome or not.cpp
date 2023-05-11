#include<iostream>

using namespace std;

class air{
	int n,rem,res=0;
	
	public:
		void palindrome(){
			cout << "enter no to check palindrome";
			cin >> n;
			int inp=n;
		while(n !=0){
			
			rem=n%10;
			
			res=res*10+rem;
			
			n=n/10;
		}	
		
		if(res==inp){
			cout << "It is palindrome";
			}
			else{
				cout << "it is not ";
			}
		}
		
	
};


int main(){
	air obj;
	obj.palindrome();
}
