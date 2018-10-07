#include<iostream>
using namespace std;

//write the function to display sum of odd nos.
int evsum(int n){
	//write a condition to stop the recursion
	if (n == 0){
	return 0;
	}
	else if (n%2 == 1){
	n = --n;
	return evsum(n-2) + n;
	}
	else{
	return evsum(n-2) + n;
	}
}

//write the function to display sum of even nos.
int oddsum(int n){
	//write a condition to stop the recursion
	if (n == 0){
	return 0;
	}
	else if( n== 1){
	return 1;	
	}
	else if (n%2 == 0){
	n = --n;
	return oddsum(n-2) + n;
	}
	else{
	return oddsum(n-2) + n;
	}
}





int main(){
//declare the variables
int n;
//ask the no. upto which it want the sum of odd and even nos and store this variable
cout<<"enter the no. upto which you want the sum of odd and even nos."<<endl;
cin>>n;
//display the result by calling the function
cout<<"sum of EVEN numbers:"<<evsum(n)<<endl;
cout<<"sum of ODD numbers:"<<oddsum(n)<<endl;
}
