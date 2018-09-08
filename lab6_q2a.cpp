#include<iostream>
using namespace std;


/*(By Value) Write a program with a function that takes two int parameters, adds them together, then returns the sum.
*/
int sum(int a, int b){
return a+b;
}


	/* The program should ask the user for two numbers*/
	int main(){
	int a,b;
	cout <<"enter nos."<<endl;
	cin>>a>>b;


	 /*then call the function with the numbers as arguments, and tell the user the sum.
	*/
	cout<<"SUM:"<<sum(a,b)<<endl;







	}
