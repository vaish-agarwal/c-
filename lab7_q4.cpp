#include<iostream>
using namespace std;

//perform summation using recursion
int sum(int n){
	//give a condition to stop it
	if (n == 0) return 0;
	return sum(n - 1) + n;
}


int main(){
//declare the variables
int n;
//ask the user for the value of n and input this variable
cout<<"enter a natural no. upto which you want the summation."<<endl;
cin>>n;
//display the result by calling the function
cout<<"sum:"<<sum(n);
}
