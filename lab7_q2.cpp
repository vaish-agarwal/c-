#include<iostream>
using namespace std;

int foo(int i, int n){

	if(i == n){
	return i;
	}
	else {
	cout<<i;
	i++;
	foo(i,n);
	}
}


int main(){
int n;
cout<<"enter a number."<<endl;
cin>>n;
foo(1,n);

}
