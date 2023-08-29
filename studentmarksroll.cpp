#include<iostream>
using namespace std;
class Student{
	int rollno;
	int marks;
	public:
	void getdata(int a,int b);
	void display();
};
void Student :: getdata(int a,int b){
	rollno=a;
	marks=b;
}
void Student :: display(){
	cout<<"Roll number:"<<rollno<<"\n";
	cout<<"Marks is:"<<marks<<"\n";
}
int main(){
	Student s1,s2;
	int a,b;
	cout<<"enter the roll no and marks of s1:";
	cin>>a>>b;
	s1.getdata(a,b);
	s1.display();
	cout<<"enter the roll no and marks of s2:";
	cin>>a>>b;
	s2.getdata(a,b);
	s2.display();
	return 0;
}
