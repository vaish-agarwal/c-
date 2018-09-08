#include<iostream>
using namespace std;

/*
(By Reference) Goal is the same as above, but this time, the function that finds the maximum should be void, and takes a third,pass by reference parameter; then puts the maximum in that.*/
void max(int a,int b, int &c ){
	if (a>b){
	c = a;
	}
	else if(a ==b){
	c = a;
	}
	else{
	c = b;
	}
}

		//call the function and display the result


		int main(){
		int a,b,max1;
		cout<<"enter 2 numbers"<<endl;
		cin>>a>>b;
		max(a, b, max1);
		cout<<"MAX:"<<max1;


		}
