#include<iostream>
using namespace std;

//write a function to display factorial using recursion
int fac(int n){
	//specify its end
	if(n == 0)return 1;
	return n * fac(n - 1);

}

int main(){
//declare variables
int n;
//ask the user for input and store it in a variable
cout<<"enter the no. for which youwant the factorial."<<endl;
cin>>n;
//display the result by calling
cout<< "factorial:"<<fac(n);
}
