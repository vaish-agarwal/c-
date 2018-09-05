#include<iostream>
using namespace std;
int main()
{

//declare the variables
int a;

	//ask the ascii code for values in a byte using while loop
	//print the result
	a = 0;
	while(a<255){
	a++;
	cout<< a <<":"<<(char)a<<endl;

	}
}
