#include<iostream>
using namespace std;

int main()
{
	int amount, R=2,time;
	float SimpleInterest;
	cout << "Enter the amount given: ";
	cin >> amount;
	cout << "Enter the time given: ";
	cin >> time;
	SimpleInterest=amount*R*time/100;
	cout << SimpleInterest; 
	return 0;
}
