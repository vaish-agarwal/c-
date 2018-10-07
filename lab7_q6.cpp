#include<iostream>
using namespace std;

//write a function to reverse the order of the digits
int rev(int n, int p ){
	if (n>0){
	return rev(n/10,(p+(n%10))*10);
	}
	else{
	return p;
	}

}

int main(){
//declare the varibles
int n;   
//ask the user for tne no. and store it in a variable.
cout<<"display a no. for which you want its digits to be reversed."<<endl;
cin>>n;
//display the result
cout<<rev (n, 0)/10;
}
