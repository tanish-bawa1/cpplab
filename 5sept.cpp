#include<iostream>
using namespace std;
class Items{
	
	int code[50];
	int price[50];
	int count;
	public:
		void cnt(){
			count=0;
		}
		void getcode_price();
		void deletee();
		void display();
		void displayitems();
};
void Items :: getcode_price(){
	cout<<"Enter code of item:";
	cin>>code[count];
	cout<<"Enter price of te item:";
	cin>>price[count];
	count++;
	
}
void Items :: deletee(){
	int a;
	cout<<"Enter item code you want to delete:";
	cin>>a;
	for(int i=0;i<count;i++){
		if(code[i]==a){
			price[i]=0;
		}
	}
}
void Items :: display(){
	cout<<"\nCode Price\n";
	for(int i=0;i<count;i++){
		cout<<"\n"<<code[i];
		cout<<" "<<price[i];
	}
	cout<<"\n";
}
int main(){
	Items order;
	order.cnt();
	int x;	
	do{
		cout<<"\n1:add items";
		cout<<"\n2:display items";
		cout<<"\n3:delete items";
		cout<<"\n4:quit\n";
		cout<<"Enter number:";
		cin>>x;
		switch(x){
		case 1:order.getcode_price();
		break;
		case 2:order.display();
		break;
		case 3:order.deletee();
		break;
		case 4:break;
	}
}while(x!=4);
return 0;
}


