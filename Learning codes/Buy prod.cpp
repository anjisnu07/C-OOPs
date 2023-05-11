#include<iostream>
using namespace std;
class air{
	int item[1000];
	int price[1000];
	int count=0;
	public:
		static int itemcode;
		
		void availableprod(){
			cout << "Itemcode:-#"<<(itemcode+24) << "-> Flower"<<endl;
			cout << "Itemcode:-#"<<(itemcode+48) << "-> Book"<<endl;
			cout << "Itemcode:-#"<<(itemcode+72) << "-> Pen"<<endl;
			cout << "Itemcode:-#"<<(itemcode+96) << "-> Phone"<<endl;
		}
		void additem(){
			cout << "Enter item code to add:\n";
			cin >> item[count];
			cout <<"Enter item price:\n";
			cin >> price[count];
			count++;
		}
		
		void removeitem(){
			int remove;
			cout << "Enter item code to remove:\n";
			cin >>remove;
			for(int i=0;i<count;i++){
				if(item[i]==remove){
					item[i]=0;
				}
			}
		}
		
};

int air::itemcode=1000;

int main()
{
  air order1;
  
  int a;
  do{
  cout<<"\nWelcome to shopping site xyz..!!\n";
  cout<<"Select one of the following: \n";
  cout<<"press 1 to add item\n";
  cout<<"press 2 to remove item\n";
  cout<<"press 3 to display total price of item\n";
  cout<<"press 4 to display all items\n";
  cout<<"press 5 to quit\n";
  cin>>a;
  switch(a)
  {
    case 1: 
        order1.additem();
        break;
    case 2:
      order1.removeitem();
      break;
//    case 3:
//      order1.displayTotal();
//      break;
//    case 4:
//      order1.displayItem();
//      break;
//    case 5:
//      break;
  }
}
while(1);
