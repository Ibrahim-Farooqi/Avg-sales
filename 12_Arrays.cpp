#include<iostream>
using namespace std;

int main() {
	int noOfDistricts=3, noOfDays=7;

	float sales[noOfDistricts][noOfDays];
	float sum=0;

	//	Input Phase
	for(int districtNo=0; districtNo<noOfDistricts; districtNo++) {
		cout<<"District-"<<(districtNo+1)<<":"<<endl;

		for(int dayNo = 0; dayNo<noOfDays; dayNo++) {
			cout<<"Enter sales for day-"<<(dayNo+1)<<": ";
			cin>>sales[districtNo][dayNo];
		}
	}

	//	Calculation Phase
	for(int districtNo=0; districtNo<noOfDistricts; districtNo++) {
		sum=0;
		cout<<"District-"<<(districtNo+1)<<":"<<endl;

		for(int dayNo = 0; dayNo<noOfDays; dayNo++) {
			sum = sum + sales[districtNo][dayNo];
		}
		cout<<"Average sale: "<<(sum/noOfDays)<<endl;
	}
}
