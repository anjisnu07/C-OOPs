#include<iostream>
using namespace std;

class set1_sub{
	protected:
		int math,phy,chem;
	public:
		void set1_marks(int a,int b,int c){
			math=a;
			phy=b;
			chem=c;
		}
		void get1_marks(){
			cout << "Maths marks:" << math<<endl;
			cout << "Phy marks:" << phy<<endl;
			cout << "Chem marks:"<<chem<<endl;
		}
};
class set2_sub{
	protected:
		int eng,beng;
	public:
		void set2_marks(int a,int b){
			eng=a;
			beng=b;
			
		}
		void get2_marks(){
			cout << "English marks:" << eng<<endl;
			cout << "Bengali marks:" << beng<<endl;
		}
};

class result:public set1_sub,public set2_sub{
	protected:
		int sum;
	public:
		void show(){
			get1_marks();
			get2_marks();
			sum=math+phy+chem+eng+beng;
			cout <<"Total marks is:"<<sum<<endl;
			cout <<"Total percentage is:"<<sum/5<<endl;
		}
};

int main(){
	result a;
	a.set1_marks(98,93,90);
	a.set2_marks(90,76);
	a.show();
}
