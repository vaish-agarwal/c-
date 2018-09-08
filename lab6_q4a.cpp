#include<iostream>
using namespace std;

/*(By Value) Write a program with a function that takes two int parameters, finds the min, then returns the minimum.*/
int min(int a, int b, int min1){
	if(a<b){
	min1 = a;
	}

	else if(a ==b){
	min1 = b;
	}

	else{
	min1 = b;
	}
return min1;
}

		/* The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.
		*/

		int main(){
		int a,b;
		cout<<"enter two numbers"<<endl;
		cin>>a>>b;
		cout<<"MIN:"<<min(a,b)<<endl;


		}
