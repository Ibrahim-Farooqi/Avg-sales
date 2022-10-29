#include<iostream>
using namespace std;

int main() {
	int y=7;
	float sales[y];
	float x=0;

	//	Input stage
	for (int day=0; day<y; day++) {
		cout<<"Enter sales for day-"<<(day+1)<<": ";
		cin>>sales[day];
	}

	//	Calculation stage
	for (int day=0; day<y; day++) {
		x = x+sales[day];
	}

	cout<<"Avg. sales of the week is: "<<(x/y);	
}
