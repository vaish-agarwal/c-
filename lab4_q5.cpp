#include<iostream>
using namespace std;
int main(){
	float a,b;



	//write q
	cout<<"Write a C++ program to enter two angles of a triangle and find the third angle."<<endl<<endl;

	//enter 2 angles
	//store in variables

	cout<<"enter 1st angle:"<<endl;
	cin>> a;
	cout<<"enter 2nd angle:"<<endl;
	cin>> b;
if(a >=180 or b >= 180 or a+b >=180)
{
	cout <<"ERROR:Neither the angles nor their sum can exceed 180."; 
	return 0;
} 

	//find and displat the third angle
	cout<<"the third angle is:"<<180-(a+b)<<endl;
	










}
