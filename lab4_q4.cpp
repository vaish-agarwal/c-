#include<iostream>
using namespace std;
int main(){
	int d ;



	//write q
	cout<<"Write a C++ program to convert days into years ,weeks and days."<<endl<<endl;

	//enter days
	cout<<"Enter number of days:";

	//store in variable
	cin>> d;

	//convert and display in weeks
	cout<<"no. of years:weeks:days-  "<<(d/365)<<':'<<(d%365)/7<<':'<<((d%365)%7)<<endl;
	 
	





}
