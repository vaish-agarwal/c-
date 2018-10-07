#include<iostream>
using namespace std;

//write a function to reverse the order of the digits
int rev(int n, int p ){
	if (n)
		return rev(n/10,(p+(n%10))*10);
	
	else
		return p;

}

int main(){
//declare the varibles
int n,p,a;   
//ask the user for tne no. 
cout<<"enter a no. for which you want to check whether it is a palindrome or not."<<endl;
cin>>n;
a = rev(n , 0);
	if(a == n){
	cout<<"it is a PALINDROME"<<endl;
	}
	else{
	cout<<"it is NOT A PALINDROME."<<endl;
	}
}


