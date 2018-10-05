#include<iostream>
using namespace std;
//write a C++ program to print all even or odd nos. in given range of recursion.

int ev(int i , int n){
int a;
a = i%2;
	if(i==(n+1))return 0;
	else if(a == 0){
	cout<<"even no:"<< i<<endl ;

	}
	else{
	cout<<"odd no :"<< i<<endl ;

	}

ev(++i,n);
}


int main(){
int n;
cout<<"enter a no. till where you want to print all even and odd nos."<<endl;
cin>>n;
ev(1,n);

}
